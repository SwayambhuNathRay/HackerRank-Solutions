#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

#define INT_MAX 2000000
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector <vector <pair <int, int> > > graph(n);
    int source, destination, weight;
    vector<int> visited(n, -1);
    vector<int> distance(n, INT_MAX);
    while(m--)
    {
        cin >> source >> destination >> weight;
        graph[source-1].push_back({weight, destination-1});
        graph[destination-1].push_back({weight, source-1});
    }
    int start;
    cin >> start;
    visited[start-1] = 1;
    distance[start-1] = 0;
    priority_queue< pair <int, int>, vector<pair<int, int>>, greater < pair <int, int>> > keep;
    keep.push({0, start-1});
    while(!keep.empty())
    {
        int node = keep.top().second;
        int weight = keep.top().first;
        visited[node] = 1;
        keep.pop();
        for(int i = 0; i < graph[node].size(); i++)
        {
            if(visited[graph[node][i].second] == -1 && distance[graph[node][i].second] > graph[node][i].first)
            {
                distance[graph[node][i].second] = graph[node][i].first;
                keep.push({graph[node][i].first, graph[node][i].second});
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < distance.size(); i++)
    {
        sum+=distance[i];
    }
    cout << sum << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}