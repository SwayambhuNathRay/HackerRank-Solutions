#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;


int main() {
    int q, n, temp;
    cin >> q;
    while(q--)
        {
        cin >> n;
        vector<int> tot_balls_per_cont(n), tot_balls_each_type(n);
        for(int i = 0; i < n; i++)
            {
            for(int j = 0; j < n; j++)
                {
                cin >> temp;
                tot_balls_per_cont[i]+= temp;
                tot_balls_each_type[j]+= temp;
            }
        }
        unordered_map< int, int > ball_type_count;
        for(int i = 0; i < n; i++)
            {
            ball_type_count.insert({tot_balls_each_type[i], 1});
        }
        int flag = 0;
        for(int i = 0; i < n; i++)
            {
            unordered_map<int, int>::const_iterator got = ball_type_count.find (tot_balls_per_cont[i]);

            if ( got == ball_type_count.end() )
                {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
