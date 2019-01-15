#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;



int find (vector<int> p, int a){
    if(p[a]==-1)
        return a;
    else
        return find(p,p[a]);
}

vector<int> Union(vector<int> p , int a ,int b){
    int root1=find(p,a);
    int root2 = find(p,b);
    p[root2]=root1;
    return p;
}


int main() {
    int n, m;
    cin >> n >> m;
    multiset<pair<int, pair<int, int>> > myset;
    for(int i = 0; i < m; i++)
        {
        int start, end, get_weight;
        cin >> start >> end >> get_weight;
        myset.insert(make_pair(get_weight, make_pair(start, end)));
    }
    vector<int> disjoint(n+1, -1); 
    int count = 1, weight = 0;
    //while(!que.empty())
    //    {
    //    cout << que.top().second.first << " " << que.top().second.second << " " << que.top().first << endl;
    //    que.pop();
    //}
    multiset<pair<int, pair<int, int>> >::iterator it = myset.begin();
    while(count < n)
        {
        pair<int, pair<int, int> > get = *it;
        int node_start = get.second.first, node_end = get.second.second, node_weight = get.first;
        it++;
        if(find(disjoint, node_start) == find(disjoint, node_end))
            continue;
        else
            {
            disjoint = Union(disjoint, node_start, node_end);
            weight+= node_weight;
            count++;
        }
    }
    cout << weight << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

