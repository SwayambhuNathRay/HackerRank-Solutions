#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> dp(2, vector<int>(n));
        vector<int> B(n);
        for(int i = 0; i < n; i++)
            cin >> B[i];
        dp[0][0] = 0;
        dp[0][1] = 0;
        for(int i = 1; i < n; i++)
        {
            dp[0][i] = max(dp[0][i-1], abs(1-B[i-1]) + dp[1][i-1]);
            dp[1][i] = max(abs(B[i]-1) + dp[0][i-1], abs(B[i] - B[i-1]) + dp[1][i-1]);
        }
        cout << max(dp[0][n-1], dp[1][n-1]) << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
