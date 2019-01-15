#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
        {
        int n, k;
        cin >> n >> k;
        if(k == 0)
            {
            for(int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
            continue;
        }
        if((n%(2*k)) != 0)
            {
            cout << -1 << endl;
            continue;
        }
        else
            {
            for(int i = 0; i < n; i++)
                {
                int l = i/k;
                if(l%2 == 0)
                    cout << i+k+1 << " ";
                else
                    cout << i-k+1 << " ";
            }
        }
        cout << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
