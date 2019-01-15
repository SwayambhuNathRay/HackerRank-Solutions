#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    stack<int> stk;
    int n, x, p;
    cin >> n;
    for (int i=0; i < n; i++)
        {
        cin >> x;
        if(x==1)
            {
            cin >> p;
            if(stk.empty())
                stk.push(p);
            else stk.push(max(p, stk.top()));
        }
        else if(x==2)
            {
            stk.pop();
        }
        else if(x==3)
            {
            cout << stk.top() << endl;
        }
    }
    
    return 0;
}
