#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main()
    {
    stack< pair <int , int> > stk;
    int n, temp;
    long keep = 0;
    cin >> n;
    while(n--)
        {
        int flag = 0;
        cin >> temp;
        while(!stk.empty() && stk.top().first < temp)
            stk.pop();
        if( !stk.empty() && stk.top().first == temp)
            {
            stk.top().second = stk.top().second + 1;
            keep+=stk.top().second;
            flag = 1;
        }
        if(flag == 0)
            stk.push(make_pair(temp, 0));
    }
    cout << 2*keep <<  endl;
    return 0;
}
