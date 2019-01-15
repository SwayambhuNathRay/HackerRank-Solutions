#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m, n;
    cin >> m >> n;
    vector<int> keep(n);
    for(int i = 0; i < n; i++)
        cin >> keep[i];
    sort(keep.begin(), keep.end());
    vector< vector<long> > dp(n, vector<long>(m+1));
    for(int i = 0; i < n; i++)
        dp[i][0] = 1;
    for(int i = 1; i <= m; i++)
        {
        if(i%keep[0] == 0)
            dp[0][i] = 1;
        else
            dp[0][i] = 0;
    }
    for(int i = 1; i < n; i++)
        {
        for(int j = 0; j <= m; j++)
            {
            if(keep[i] > j)
                dp[i][j] = dp[i-1][j];
            else
                {
                dp[i][j] = dp[i-1][j] + dp[i][j - keep[i]];
            }
        }
    }
    cout << dp[n-1][m] << endl;

      
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
