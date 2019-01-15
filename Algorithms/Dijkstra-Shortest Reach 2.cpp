#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
        {
        int n, m;
        cin >> n >> m;
        vector< vector< pair< int, int> > > keep(n+1);
        for(int i = 0; i < m; i++)
            {
            int start, end, weight;
            cin >> start >> end >> weight;
            int flag=0;
            //for(int j = 0; j < keep[start].size(); j++)
            //    {
            //    if(keep[start][j].second == end && keep[start][j].first > weight)
            //        {
            //        keep[start][j].first = weight;
            //        flag = 1;
            //    }
            //}
            if(flag == 0)
                {
                keep[start].push_back(make_pair(weight, end));
            }
            int flag_1 = 0;
            //for(int j = 0; j < keep[end].size(); j++)
            //    {
            //    if(keep[end][j].second == start && keep[end][j].first > weight)
            //        {
            //        keep[end][j].first = weight;
            //        flag_1 = 1;
            //    }
            //}
            if(flag_1 == 0)
                keep[end].push_back(make_pair( weight, start));
        }
        priority_queue< pair<int, int>, vector<pair<int, int>> , greater<pair<int, int>> > que;
        int start_node;
        cin >> start_node;
        que.push(make_pair(0, start_node));
        vector<int> distance(n+1, 10000000);
        vector<int> visited(n+1, 0);
        distance[start_node] = 0;
        while(!que.empty())
            {
            int source = que.top().second;
            int dist = que.top().first;
            que.pop();
            if(visited[source])
                continue;
            visited[source] = 1;
            for(int i = 0; i < keep[source].size(); i++)
                {
                int calc_dist = dist + keep[source][i].first;
                if(!visited[keep[source][i].second]){
                if(calc_dist < distance[keep[source][i].second])
                    {
                    distance[keep[source][i].second] = calc_dist;
                    que.push(make_pair(calc_dist, keep[source][i].second));
                }
                }
            }
        }
        for(int i = 1; i <= n; i++)
            {
            if(distance[i] == 10000000)
                cout << -1 << " ";
            else if(distance[i] != 0)
                cout << distance[i] << " ";
        }
        cout << endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}