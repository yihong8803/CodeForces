#include <iostream>
using namespace std;

int main(){
    int count;
    cin>>count;
    for(int i=0;i<count;i++){
        int num;
        cin>>num;
        char element[num];
        int score=0;
        for(int j=0;j<num;j++){
            cin>>element[j];
        }
        for(int j=0;j<num;j++){
            if(element[j]=='+'){
                score++;
            }else{
                score--;
            }
        }
        cout<<abs(score)<<endl;

    }
    return 0;
    }
