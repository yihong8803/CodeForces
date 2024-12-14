#include <iostream>
using namespace std;

int main(){
    int count;
    cin>>count;
    int mark=0;

    for(int i=0;i<count;i++){
        bool bool1,bool2,bool3;
        cin>> bool1 >> bool2 >> bool3;
        if ((bool1 + bool2 + bool3)>1 )
            mark++;
    }
    cout<<mark;
    


    return 0;
}