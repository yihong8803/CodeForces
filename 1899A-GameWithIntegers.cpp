#include <iostream>

using namespace std;

bool GameStart(int num){
    int round = 1;
    while(round <= 10){
        //Vanya wanna divide by 3
        if((num+1)%3 == 0){
            num++;
            return 1;
        }else if((num-1)%3 == 0){
            num--;
            return 1;
        }else{
            num++;
        }

        //Vova dont wanna divide by 3
        if((num+1)%3 == 0){
            num++;
        }else if((num-1)%3 == 0){
            num--;
        }else{
            num--;
        }
        round +=1;
    }
    return 0;
    
}




int main(){
    int count, num;
    cin>> count;
    for(int i=0;i<count;i++){
        cin>>num;
        if(GameStart(num)){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }

    return 0;
}
