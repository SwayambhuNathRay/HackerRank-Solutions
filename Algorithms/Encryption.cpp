#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    int length = s.length();
    int row = floor(sqrt(length));
    int column = ceil(sqrt(length));
    if(row*column < length)
        row++;
    vector< vector <char> > keep(row, vector<char>(column));
    int k = 0;
    for(int i = 0; i < row; i++)
        {
        for(int j = 0; j < column; j++)
            {
            if(k < length)
                keep[i][j] = s[k++];
            else
                keep[i][j] = ' ';
        }
    }
    for(int j = 0; j < column; j++)
        {
        for(int i = 0; i < row; i++)
            {
            if(keep[i][j]!=' ')
                cout << keep[i][j];
        }
        cout << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
