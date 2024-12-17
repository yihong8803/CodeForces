#include <iostream>
#include <vector>
using namespace std;

bool SieveOfEratosthenes(int n){
    vector<bool>prime(n+1,true);

    //Use 2,3,4,5 as common factor to eliminate composite number
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]= false;
            }
        }
    }
    
    for (int p=2;p<=n;p++){
        if(prime[p]) cout<<p<<" ";
    }
}


bool IsComposite(int n,int input){
    vector<bool>prime(n+1,true);

    //Use 2,3,4,5 as common factor to eliminate composite number
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]= false;
            }
        }
    }
    
    //input = 3, prime[p] = true/false
    for (int p=2;p<=n;p++){
        //If it is prime number
        if(prime[p]){
            //Check the input is prime number or not
            if(input == p){
                return false;
            }
        }
    }
    return true;
}



void PrintComposite(int n, int input){
    if(IsComposite(n,input)){
        cout<<"IS COMPOSITE"<<endl;
    }else{
        cout<<"IS PRIME"<<endl;
    }
}


int main(){
    int n,x,y;
    cin>> n;

    for (int x=4;x<n;x++){
        int y = n-x;
        if (IsComposite(n,x) && IsComposite(n,y)){
            cout<<x<<" "<<y<<endl;
            return 0;
        }
    }
}


// int main(){
//     int n,x,y;
//     cin>> n;
    
//     //其实我从n%2==1 我就知道是错的了， 原来正确方法是 int x=4,x++, int y=n-x;
//     //其实这么看其实也没有错，我只是从中间开始找，然后正确方法是从一开始找
//     //我的方法是找到两个数字再去确认either one是不是prime， 然后继续++ --
//     //正确方法是找到两个数字确认both是不是composite，然后继续++ --
//     if(n%2==1){
//         x=n/2-1;
//         y=(n/2)+2;      
//         while(!IsComposite(n,x) || !IsComposite(n,y)){
//             x++;
//             y--;
//         }
//     }else{
//         x=(n/2)-2;
//         y=n/2+2;
//         while(!IsComposite(n,x) || !IsComposite(n,y)){
//             x++;
//             y--;
//         }
        
//     }
//     cout<<x<<" "<<y<<endl;
//     return 0;
// }
