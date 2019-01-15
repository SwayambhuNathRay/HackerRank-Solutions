#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> dp(101, -1);
//vector<int> visited(n+1, -1);
int func(vector< vector<int> > keep, int k)
    {
    if(dp[k] != -1)
        return dp[k];
    else
        {
        int temp = 0;
        for(int i = 0; i < keep[k].size(); i++)
            {
            temp += func(keep, keep[k][i]);
        }
        dp[k] = 1+temp;
        return 1+temp;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector< vector<int> > keep(n+1);
    for(int i = 0; i < m; i++)
        {
        int a, b;
        cin >> a >> b;
        keep[b].push_back(a);
    }
    
    int p = func(keep, 1);
    int count = -1;
    for(int i = 0; i < dp.size(); i++)
        {
        if(dp[i]%2 == 0)
            count++;
    }
    cout << count << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
