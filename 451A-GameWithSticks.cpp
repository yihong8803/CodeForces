#include <iostream>

using namespace std;



int main(){
    //n is horizontal adn m is vertical
    int n,m;
    cin>>n>>m;

    // //Akshat first, Malvika second
    // //intersection point is [x,y]
    // //create 2d array [n,m]
    // int arr1[n,m];

    // //fill with the number 1
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m,j++){
    //         arr1[i,j] = 1;
    //     }
    // }



    //The number of intersection point is n*m,
    //if n*m = odd, Akshat win, if n*m = even, Malvika win
    // 12 is 3 --> Akshat
    // 16 is 4 --> malvika
    // 9 is 3 --> Akshat
    // 4 is 2 --> Malvika
    // 6 is 2 --> Malvika

    // 12%2 = 1
    // 16%2 = 0
    // 9%2 = 1
    // 4%2 = 0
    // 6%2 = 0
    
    //Therefore, if (n*m)%2 == 1 Akshat win, vice versa
    if((min(n,m))%2==1) {
        cout<<"Akshat";
    }else {cout<<"Malvika";}

    return 0;
}
