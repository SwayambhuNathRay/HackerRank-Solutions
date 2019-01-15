#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    vector<int> keep(t);
    for(int i = 0; i < t; i++)
    {
        cin >> keep[i];
    }
    vector<int> ans(100, 0);
    for(int i = 0; i < keep.size(); i++)
    {
        ans[keep[i]]+=1;
    }
    for(int i = 0; i < 100; i++)
    {
        cout << ans[i] << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
