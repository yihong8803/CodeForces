#include <iostream>
using namespace std;

int main(){
    int w;
    cin >> w;
    if (w%2 ==0 && w!=2){
        //See if the number would be even number or not
        //ex: 10 divide can be 2 and 8, 12 divide can be 6 and 6, 14 divide can be 2 and 12
        //ex: 4 divide can be 2 and 2, 6 divide can be 2 and 4
        //ex: 2 divide can be 1 and 1 wrong
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}