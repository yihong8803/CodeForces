#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b){
    int result=min(a,b);
    while(result > 0){
        cout<<"Result"<<result<<endl;
        if(a%result==0 && b%result==0) break;
        result--;
    }
    return result;
}

int main(){

    int count;
    cin >>count;
    for(int i=0;i<count;i++){
        //Three initial threadlets
        int arr1[3];
        cin>>arr1[0]>>arr1[1]>>arr1[2];
        sort(arr1, arr1 + 3);
        if(arr1[1] % arr1[0] == 0 && arr1[2] % arr1[0] == 0){
            if ((arr1[1]/arr1[0]-1) + (arr1[2]/arr1[0]-1) <= 3 ){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;   
            }
        }else cout<<"NO"<<endl;
    }

    return 0;
}
