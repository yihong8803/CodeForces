#include <iostream>
#include <string>
using namespace std;

int main(){
    //count of input
    int count;
    cin >> count;
    string input[count];
    string output[count];
    
    //loop
    for(int i=0; i<count;i++){ 
        cin >> input[i];
        if (input[i].length() > 10){
            output[i] = string(1,input[i].at(0)) + to_string(input[i].length() -2) + string(1,input[i].back());
            
        }else{
            output[i]= input[i];
        }
    }

    //Print All
    for(int i=0; i<count;i++)
    cout<< output[i]<<endl;
    return 0;
}