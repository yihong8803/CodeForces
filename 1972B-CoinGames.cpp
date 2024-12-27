#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >>count;
    for(int i=0;i<count;i++){
        int n,sumU=0;
        string s;
        cin>>n>>s;
        for(char c:s){

            if(c=='U') sumU++;
        }
        if(sumU%2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
