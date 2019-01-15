#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    priority_queue<int, vector<int>, greater<int> > myqu;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        {
        int temp;
        cin >> temp;
        myqu.push(temp);
    }
    int step = 0;
    while(myqu.top() < k && !myqu.empty())
        {
        int first = myqu.top();
        myqu.pop();
        int second = myqu.top();
        myqu.pop();
        myqu.push(first + 2*second);
        step++;
    }
    if(myqu.empty())
        cout << -1 << endl;
    else
        cout << step << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
