#include <iostream>

using namespace std;

int main(){
    int count;
    cin>> count;
    for(int i=0;i<count;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && b<c){
            cout<<"STAIR"<<endl;
        }else if(a<b && b>c){
            cout<<"PEAK"<<endl;
        }else{
            cout<<"NONE"<<endl;
        }
    }

    return 0;
}
