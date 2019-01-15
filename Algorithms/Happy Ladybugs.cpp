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
        int n;
        cin >> n;
        string b;
        cin >> b;
        int flag_1 = 0;
        vector<int> keep(26, 0);
        for(int i = 0; i < n; i++)
            {
            if(b[i] == '_')
                flag_1 = 1;
        }
        if(flag_1 != 1)
            {
            int flag_2 = 0;
            for(int i = 0; i < n; i++)
                {
                if(b[i] != b[i+1])
                    {
                    cout << "NO" << endl;
                    flag_2 = 1;
                    break;
                }
                else
                    {
                    while(b[i+1]==b[i])
                        i++;
                }
            }
            if(flag_2!=1)
                cout << "YES" << endl;
        }
        else
            {
        for(int i = 0; i < n; i++)
            {
            if(b[i]!= '_')
                keep[(int)(b[i] - 'A')]+=1;
        }
        int flag = 0;
        for(int i = 0; i < 26; i++)
            {
            if(keep[i] == 1)
                {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "YES" << endl;
    }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
