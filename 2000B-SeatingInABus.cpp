#include <iostream>

using namespace std;

bool CheckNear(int total, int arr1[]){
    //Compare each element in array
        int l=arr1[0],r=arr1[0];
        for(int j=1;j<total;j++){
            if(arr1[j]==l-1){
                l--;
            }else if(arr1[j]==r+1) {
                r++;
            }else{
                return false;
            }
        }
        return true;
}

int main(){
    int count;
    cin>> count;
    for(int i=0;i<count;i++){
        int total;
        cin>>total;
        int arr1[total];
        //Put everything inside array
        for(int j=0;j<total;j++){
            cin>>arr1[j];
        }
        if(CheckNear(total,arr1))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }

    return 0;
}
