#include <iostream>

using namespace std;

int main(){
    int count, second;
    cin>> count>>second;
    string s;
    cin>>s;
   
    for(int j=0;j<second;j++){
        for(int k=count;k>0;k--){
            //Check girl if in front is a boy
            if(s[k]=='G'&& s[k-1]=='B'){
                swap(s[k-1],s[k]);
            }    
        }
    }

    for(int i=0;i<count;i++){
        cout<<s[i];
    }

    return 0;
}
