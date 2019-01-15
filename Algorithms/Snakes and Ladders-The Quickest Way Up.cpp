#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        queue<pair<int, int> > game;
        unordered_map<int, int> jump;
        int n, m, source, destination;
        cin >> n;
        while(n--)
        {
            cin >> source >> destination;
            jump[source] = destination;
        }
        cin >> m;
        while(m--)
        {
            cin >> source >> destination;
            jump[source] = destination;
        }
        vector<int> visited(101, -1);
        game.push({1, 0});
        while(!game.empty())
        {
            int square = game.front().first;
            int level = game.front().second;
            if(visited[square] != -1)
            {
                game.pop();
                continue;
            }
            visited[square] = level;
            if(square == 100)
            {
                break;
            }
            game.pop();
            for(int i = 1; i <= 6 && square + i <= 100; i++)
            {
                if(jump.find(square+i) != jump.end())
                {
                    if(visited[jump[square+i]] == -1)
                    {
                        game.push({jump[square+i], level+1});
                    }
                }
                else
                {
                    if(visited[square+i] == -1)
                    {
                        game.push({square+i, level+1});
                    }
                }
            }
        }
        cout << visited[100] << endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
