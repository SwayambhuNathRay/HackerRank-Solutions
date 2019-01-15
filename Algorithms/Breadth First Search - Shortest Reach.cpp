#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    int q;
    cin >> q;
    while(q--)
        {
        int n, m;
        cin >> n >> m;
        vector< vector< int> > node(n+1);
        for(int i = 0 ; i < m; i++)
            {
            int start, end;
            cin >> start >> end;
            node[start].push_back(end);
            node[end].push_back(start);
        }
        vector<int> visited(n+1, -1), level(n+1,-1);
        int s;
        cin >> s;
        queue< pair< int, int> > keep;
        keep.push(make_pair(s,0));
        visited[s] = 1;
        while(!keep.empty())
            {
            pair<int, int> tempu = keep.front();
            int temp = tempu.first;
            int lev = tempu.second;
            keep.pop();
            for(int i = 0; i < node[temp].size(); i++)
                {
                if(visited[node[temp][i]] == -1)
                    {
                    visited[node[temp][i]] = 1;
                    level[node[temp][i]] = lev+1;
                    keep.push(make_pair(node[temp][i], lev+1 ));
                }
            }
        }
        for(int i = 1; i < n+1; i++)
            {
            if(i!=s)
                {
                if(level[i] == -1)
                    cout << -1 << " ";
                else
                    cout << level[i]*6 << " ";
            }
        }
        cout <<  endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
