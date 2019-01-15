#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    int k, n;
    cin >> k;
    while(k--)
        {
        cin >> n;
        vector<int> keep_steps(n+1, 2147483647);
        keep_steps[n] = 0;
        queue< pair<int, int> > myqu;
        myqu.push(make_pair(n, 0) );
        while(!myqu.empty())
            {
            int keep = myqu.front().first;
            int steps = myqu.front().second;
            myqu.pop();
            if(keep == 0)
                {
                cout << steps << endl;
                break;
            }
            if(keep < 0)
                continue;
            if(steps > keep_steps[keep])
                continue;
            
            for(int i = 2; i < sqrt(keep) + 1; i++)
                {
                if(keep%i == 0)
                    {
                    if(i == keep)
                        continue;
                    int keep_max = max(keep/i, i);
                    int new_step = steps+1;
                    if(new_step < keep_steps[keep_max])
                        {
                        myqu.push(make_pair(keep_max, new_step));
                        keep_steps[keep_max] = new_step;
                    }
                }
            }
            if(keep_steps[keep - 1] > steps + 1)
                {
                keep_steps[keep-1] = steps+1;
                myqu.push(make_pair(keep - 1, steps+1));
            }
        }
    }
 
    return 0;
}