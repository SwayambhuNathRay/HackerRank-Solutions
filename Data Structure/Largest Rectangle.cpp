#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    int n, i = 0, area = 0, maxarea = -1;
    cin >> n;
    stack<int> stk;
    vector<int> vec;
    while(n--)
        {
        int current;
        cin >> current;
        vec.push_back(current);
        while(!stk.empty() && current < vec[stk.top()])
            {
            int top = stk.top();
            stk.pop();
            if(stk.empty())
                {
                area = vec[top]*i;
            }
            else
                area = vec[top] * (i - stk.top() - 1);
            maxarea = maxarea > area ? maxarea:area;
        }
        stk.push(i);
        i++;
    }
    while(!stk.empty())
        {
            int top = stk.top();
            stk.pop();
            if(stk.empty())
                {
                area = vec[top]*i;
            }
            else
                area = vec[top] * (i - stk.top() - 1);
            maxarea = maxarea > area ? maxarea:area;
    }
    cout << maxarea << endl; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
