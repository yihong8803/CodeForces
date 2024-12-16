#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << 2 * i - 1 << ' ';  // Print odd numbers starting from 1
    }
    cout << '\n';  // End of output for this test case
}

int main() {
    ios_base::sync_with_stdio(false);  // Disable synchronization with C I/O for faster input/output
    cin.tie(NULL);  // Tie input and output streams for better performance in competitive scenarios
    int t;
    cin >> t;  // Read number of test cases
    while (t--) {
        solve();  // Solve each test case
    }
    return 0;
}
