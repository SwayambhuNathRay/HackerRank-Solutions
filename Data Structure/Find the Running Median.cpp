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
#include <functional>

using namespace std;
int main() {
    int n;
    cin >> n;
    priority_queue<float, vector<float>, greater<float> > higher;
    priority_queue<float> lower;

    while(n--)
        {
        float temp;
        cin >> temp;
        if(higher.size() == 0 && lower.size() == 0)
            {
            lower.push(temp);
            printf("%.1f\n", temp);
        }
        else
         {
            if(temp < lower.top())
                {
                lower.push(temp);
            }
            else
                {
                higher.push(temp);
            }
            
            
            int keep_low = lower.size();
            int keep_high = higher.size();

            if((keep_low - keep_high) >= 2 )
                {
                int keep1 = lower.top();

                higher.push(keep1);

                lower.pop();

            }

            if((keep_high - keep_low) >= 2 )
                {
                int keep2 = higher.top();
                lower.push(keep2);

                higher.pop();

            }
        
            int high = higher.size();
            int low = lower.size();
            

            if(high == low)
                printf("%.1f\n", (lower.top() + higher.top())/2.0);
            else if (high > low)
                printf("%.1f\n", higher.top());
            else
                printf("%.1f\n", lower.top());
    }
                   }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
