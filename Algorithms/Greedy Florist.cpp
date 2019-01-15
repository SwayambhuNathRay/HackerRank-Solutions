#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool comparison(int i, int j)
    {
    return j < i;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> keep(n);
    for(int i = 0; i < n; i++)
        cin >> keep[i];
    sort(keep.begin(), keep.end(), comparison);
    if(k >= n)
        {
        long long cost = 0;
        for(int i = 0; i < n; i++)
            cost+=keep[i];
        cout << cost << endl;
        return 0;
    }
    long long cost = 0, multi = 1;
    for(int i = 0; i < n; i++)
        {
        cost+=keep[i]*(floor(i/k)+1);
    }
    cout << cost << endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
