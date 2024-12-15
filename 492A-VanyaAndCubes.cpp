#include <iostream>
using namespace std;

int main(){
    int n,row=0,cube=1,count=0,total=0;
    cin>>n;

    while(total+row+cube<=n){
        //Make a row
        //Make a loop calculate cube
        //cube=1
        //row= row + cube
        //cube++
        row+=cube;
        total+=row;
        cube++;
        count++;
    }
    cout<<count;
    
    return 0;
}
