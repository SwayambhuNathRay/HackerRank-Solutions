#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    while(q--)
        {
        int n;
        cin >> n;
        int** a = new int*[2*n];
        for(int i = 0; i < 2*n; i++)
           a[i] = new int[2*n];
        for(int i = 0; i < 2*n; i++)
            {
            for(int j = 0; j < 2*n; j++)
                {
                cin >> a[i][j];
            }
        }
        int sum = 0, m = 2*n;
       for(int i = 0; i < n; i++)
           {
           for(int j = 0; j < n; j++)
           {
           sum+=max(max(a[i][j], a[i][m-1-j]), max(a[m-1-i][j], a[m-1-i][m-1-j]));
       }
       }
        cout << sum << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
