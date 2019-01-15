#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector> 
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>

using namespace std; // }}}

void Dfs(int k, vector<int> &visited, vector<vector<int> > &pairs, int &t)
    {
    visited[k] = 1;
    t++;
    for(int i = 0; i < pairs[k].size(); i++)
        {
        if(visited[pairs[k][i]] == -1)
            Dfs(pairs[k][i], visited, pairs, t);
    }
}

int main()
{ 
    int N, I;
    cin >> N >> I;
    vector<vector<int> > pairs(N);
    for (int i = 0; i < I; ++i) {
        int a, b;
        cin >> a >> b;
        pairs[a].push_back(b);
        pairs[b].push_back(a);
    }
    vector<int> visited(N);
    for(int i = 0; i < N; i++)
        visited[i] = -1;
    vector<int> keep;
    for(int i = 0; i < N; i++)
        {
        if(visited[i] == -1)
            {
            int t = 0;
            Dfs(i, visited, pairs, t);
            keep.push_back(t);
        }
    }
    long long sum = 0;
    vector<int> t(N,0);
    for(int i = keep.size() - 2; i >= 0; i--)
        {
        t[i] = keep[i+1]+t[i+1];
    }
    t[keep.size()-1] = 0;
    for(int i = 0; i < keep.size(); i++)
        sum+= keep[i]*t[i];
    long long result = sum;
    
    /** Write code to compute the result using N,I,pairs **/
    
    
    cout << result << endl;
    return 0;
}
