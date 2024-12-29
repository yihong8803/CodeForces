#include <iostream>
#include <algorithm>
using namespace std;

void PrintArray(int n, int arr1[]){
    for(int i=0;i<n;i++){
        cout<<"Element "<<i<<": "<<arr1[i]<<endl;
    }
}

int main(){

    int count;
    cin >>count;
    for(int i=0;i<count;i++){
        bool result = true;
        int n,f,a,b;
        cin>>n>>f>>a>>b;
        int msg[n+1] = {0};
        for(int j=1;j<n+1;j++){
            cin>>msg[j];
        }

        //Check condition
        for(int j=0;j<n;j++){
            int diff = msg[j+1]-msg[j];
            long long diffA = (long long)diff*a;
            if(diffA > b) 
                f-=b;
            else    f=f-diffA;
            if(f<=0){
                result=false;
                break;
            }
        }
        if(result) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
