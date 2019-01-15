#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
        {
        int n, a, b;
        set<int> myset;
        cin >> n >> a >> b;
        int start = a*(n-1);
        int end = b*(n-1);
        myset.insert(start);
        myset.insert(end);
        for(int i = 1; i < n-1; i++)
            myset.insert(start - (i*a) + (i*b));
        set<int>:: iterator it = myset.begin();
        while(it!= myset.end())
            {
            cout << *it << " ";
            it++;
        }
        cout << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
