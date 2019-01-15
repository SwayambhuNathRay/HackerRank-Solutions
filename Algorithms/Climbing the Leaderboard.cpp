#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m, temp, keep=0;
    cin >> n;
    vector<int> scores;
    while(n--)
        {
        cin >> temp;
        if(temp!=keep)
            scores.push_back(temp);
        keep = temp;
    }
    cin >> m;
    int size = scores.size();
    int i = size -1;
    while(m--)
        {
        cin >> temp;
        for(; i >0; i--)
            {
            if(scores[i] >= temp)
                break;
        }
        if(scores[i] > temp)
            cout << i+2 << endl;
        else
            cout << i+1 << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
