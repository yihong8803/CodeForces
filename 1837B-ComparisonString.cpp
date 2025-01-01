#include <iostream>
#include <algorithm>
using namespace std;

void PrintArray(int n, int arr1[]){
    for(int i=0;i<n;i++){
        cout<<"Element "<<i<<": "<<arr1[i]<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int count;
    cin >>count;
    for(int i=0;i<count;i++){
        int n,repeat=2,ans=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1]) repeat=1;
            repeat++;
            ans = max(ans,repeat);
        }
        cout<<ans<<endl;
    }

    return 0;
}
