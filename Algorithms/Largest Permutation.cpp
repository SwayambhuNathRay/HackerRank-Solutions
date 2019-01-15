#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> keep(n);
    for(int i = 0; i < n; i++)
        cin >> keep[i];
    if(k > n)
        k = n;
    for(int i = 0; i < k; i++)
        {
        for(int j = i; j < n; j++)
            {
            if(keep[j] == n - i)
                {
                if(j == i)
                    k++;
                swap(keep[i], keep[j]);
                break;
            }
        }
    }
    for(int i = 0; i < n; i++)
        cout << keep[i] << " ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
