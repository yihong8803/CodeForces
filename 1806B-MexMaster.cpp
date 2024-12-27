// #include <iostream>
// #include <algorithm>
// using namespace std;

// void PrintArray(int n, int arr1[]){
//     for(int i=0;i<n;i++){
//         cout<<"Element "<<i<<": "<<arr1[i]<<endl;
//     }
// }

// int main(){

//     int count;
//     cin >>count;
//     for(int i=0;i<count;i++){
//         int total;
//         cin>>total;
//         int arr1[total];
//         for(int j=0;j<total;j++){
//             cin>>arr1[j];
//         }

//         //Check two corresponding integer are not the same
//         for(int j=0;j<total;j++){
//             while(arr1[j]==arr1[j+1]){
                
//             }
//         }



//         int arr2[total-1];

//         for(int k=0;k<total-1;k++){
//             arr2[k] = arr1[k]+arr1[k+1];
//         }
//         PrintArray(total-1,arr2);

//         int min=999999;
//         for(int k=0;k<total-1;k++){    
//             if(arr2[k]<min) min = arr2[k];
//         }
//         if(min-1>=0) cout<<"Min:"<<min-1<<endl;
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Why Use These?
    //In competitive programming or performance-critical applications, I/O speed is crucial. This combination can reduce runtime significantly when dealing with large inputs/outputs.

    //This disables the synchronization between C++ standard streams (cin/cout) and C standard streams (scanf/printf).
    ios::sync_with_stdio(false);
    //This unties cin from cout.
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int sum0 = 0;  // Count of zeros
        bool f = false;  // Flag for elements >= 2

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                sum0++;
            } else if (x >= 2) {
                f = true;
            }
        }

        if (sum0 <= (n + 1) / 2) {
            cout << "0\n";
        } else if (f || sum0 == n) {
            cout << "1\n";
        } else {
            cout << "2\n";
        }
    }

    return 0;
}
