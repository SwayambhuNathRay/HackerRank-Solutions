#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>



using namespace std;
long long cities = 0;
void Dfs(long long k, vector<int> &visited, vector<vector<long long> > &keep)
    {
    visited[k] = 1;
    for(long long i = 0; i < keep[k].size(); i++)
        {
        if(visited[keep[k][i]] == -1)
            {
            Dfs(keep[k][i], visited, keep);
            cities++;
        }
    }
}


int main() {
    int t;
    cin >> t;
    while(t--)
        {
        long long n, m, c_lib, c_road;
        cin >> n >> m >> c_lib >> c_road;
        if(m==0)
            cout << c_lib*n << endl;
        else if(m!=0)
            {
            long long cost = 0;
        vector< vector<long long> > keep(n+1);
        for(long long i = 0; i < m; i++)
            {
            int a, b;
            cin >> a >> b;
            keep[a].push_back(b);
            keep[b].push_back(a);
        }
        vector<int> visited(n+1, -1);
        long long count_disjoint = 0;
        for(long long i = 1; i <= n; i++)
            {
            if(visited[i] == -1)
                {
                cities = 1;
                Dfs(i, visited, keep);
                count_disjoint++;
                cost+=(cities-1)*c_road;
            }
        }
            cost+= count_disjoint*c_lib;
            long long ke = c_lib*n;
           cost = cost < ke? cost:ke;
            cout << cost << endl;
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
