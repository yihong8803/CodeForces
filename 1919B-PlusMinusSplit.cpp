#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

//My Own Code
// int main(){
//     int count;
//     cin>>count;
//     for(int i=0;i<count;i++){
//         int num;
//         cin>>num;
//         char element[num];
//         int score=0;
//         for(int j=0;j<num;j++){
//             cin>>element[j];
//         }
//         for(int j=0;j<num;j++){
//             if(element[j]=='+'){
//                 score++;
//             }else{
//                 score--;
//             }
//         }
//         cout<<abs(score)<<endl;

//     }
//     return 0;
// }

//DP Code
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Array to store the transformed values of the string
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == '+') {
                a[i] = 1;
            } else {
                a[i] = -1;
            }
        }

        // DP array to store the minimum penalty for subarray a[0..i]
        vector<int> dp(n + 1, 0); // dp[0] = 0, because empty array has 0 penalty
        
        // Process each index
        for (int i = 1; i <= n; ++i) {
            dp[i] = dp[i - 1] + abs(a[i - 1]) * 1; // A penalty of 1 for a single element
            int current_sum = 0;
            
            // Try every possible subarray ending at i
            for (int j = i - 1; j >= 0; --j) {
                current_sum += a[j];
                int length = i - j;
                dp[i] = min(dp[i], dp[j] + abs(current_sum) * length);
            }
        }

        // The minimum penalty is stored in dp[n]
        cout << dp[n] << endl;
    }
    
    return 0;
}
