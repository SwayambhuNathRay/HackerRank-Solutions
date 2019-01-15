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
    int temp = keep[keep.size() - 1];
    int i;
    for(i = keep.size() - 2; i>= 0; i--)
    {
        if(keep[i] >= temp)
        {
            keep[i+1] = keep[i];
            print_out(keep);
        }
        else
        {
            break;
        }
    }
    keep[i+1] = temp;
    print_out(keep);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
