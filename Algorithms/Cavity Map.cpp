#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector< vector<char> > keep(n, vector<char>(n));
    for(int i = 0; i < n; i++)
        {
        for(int j = 0; j < n; j++)
            cin >> keep[i][j];
    }
    for(int i = 1; i < n-1; i++)
        {
        for(int j = 1; j < n-1; j++)
            {
            if((int)keep[i][j] > (int)keep[i-1][j] && (int)keep[i][j] > (int)keep[i+1][j] && (int)keep[i][j] > (int)keep[i][j-1] && (int)keep[i][j] > (int)keep[i][j+1])
                keep[i][j] = 'X';
        }
    }
        for(int i = 0; i < n; i++)
        {
        for(int j = 0; j < n; j++)
            cout << keep[i][j];
            cout << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
