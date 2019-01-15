#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int> > seq(n+1);
    int lastans = 0;
    while(q--)
        {
        int t;
        cin >> t;
        if(t==1)
            {
            int x, y;
            cin >> x >> y;
            int index = (x ^ lastans)%n;
            seq[index].push_back(y);
        }
        if(t==2)
            {
            int a, b;
            cin >> a >> b;
            int ind = (a ^ lastans)%n;
            vector<int> temp = seq[ind];
            int size = temp.size();
            lastans = temp[b%size];
            cout << lastans << endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
