#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mx 1000000

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > keep(n, vector<int>(n, mx));
    for(int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        a--;
        b--;
        keep[a][b] = w;
    }
    for(int i = 0; i < n; i++)
    {
        keep[i][i] = 0;
    }
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(keep[i][k] != mx && keep[k][j] != mx)
                {
                    keep[i][j] = min(keep[i][j], keep[i][k] + keep[k][j]);
                }
            }
        }
    }
    int query;
    cin >>query;
    for(int i = 0; i < query; i++)
    {
        int a, b;
        cin >> a >>b;
        a--;
        b--;
        if(keep[a][b] != mx)
        {
            cout << keep[a][b] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
