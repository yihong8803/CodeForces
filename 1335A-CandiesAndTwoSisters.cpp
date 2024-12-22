#include <iostream>

using namespace std;

int main(){
    int count;
    cin>> count;
    for(int i=0;i<count;i++){
        //a>b
        //a+b = n
        //find the num of ways

        //Ask the number of candy
        int candy,way;
        cin >> candy;
        way = candy - (candy/2+1);
        cout<<way<<endl;
    }

    return 0;
}
