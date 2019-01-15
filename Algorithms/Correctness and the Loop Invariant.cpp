#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print_out(vector<int> &keep)
{
    for(int i = 0; i < keep.size(); i++)
    {
        cout << keep[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    vector<int> keep(t);
    for(int i = 0; i < t; i++)
    {
        cin >> keep[i];
    }
    for(int i = 1; i < t; i++)
    {
        int temp = keep[i];
        int j;
        for(j = i-1; j >= 0; j--)
        {
            if(keep[j] > temp)
            {
                keep[j+1] = keep[j];
            }
            else
            {
                break;
            }
        }
        keep[j+1] = temp;
    }
    print_out(keep);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
