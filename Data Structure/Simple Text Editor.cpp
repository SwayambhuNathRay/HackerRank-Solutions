#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s = "", keep, temp;
    int q;
    stack<string> str;
    for(int i = 0; i < n; i++)
        {
        cin >> q;
        if(q == 1)
            {
            str.push(s);
            cin >> temp;
            s+=temp;
        }
        else if(q == 2)
            {
            str.push(s);
            int k;
            cin >> k;
            int len = s.length();
            temp = s;
            s= "";
            s.append(temp, 0, len-k);
        }
        else if(q == 3)
            {
            int t;
            cin >> t;
            cout << s[t-1] << endl;
        }
        else
            {
            s = str.top();
            str.pop();
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
