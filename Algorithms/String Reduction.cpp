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
        string check;
        cin >> check;
        vector<int> freq(3, 0);
        for(int i = 0; i < check.length(); i++)
        {
            freq[check[i] - 'a']+=1;
        }
        int rem = 0;
        if(freq[0] == check.length() || freq[1] == check.length()  || freq[2] == check.length())
            cout << check.length() << endl;
        else
        {
            for(int i = 0; i < 3; i++)
            {
                rem+=freq[i]%2;
            }
            if(rem == 0 || rem == 3)
                cout << 2 << endl;
            else
            {
                cout << 1 << endl;
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
