#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    int n;
    cin >> n;
    int *p = new int[n];
    int *day = new int[n];
    for(int i = 0; i < n; i++)
        cin >> p[i];
    int max = 0; 
    int min = p[0];
    stack<int> keep;
    keep.push(0);
    for(int i = 1; i < n; i++)
        {
        if(p[i]>p[i-1])
            day[i] = 1;
        min = min < p[i]?min:p[i];
        
        while(!keep.empty() && p[keep.top()] >=p[i])
            {
            if(p[i] > min)
                day[i] = day[i]>day[keep.top()] + 1 ?day[i]:day[keep.top()]+1;
            keep.pop();
        }
        
        keep.push(i);
        max = max > day[i]? max:day[i];
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cout << max << endl;
    return 0;
}
