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
        string s;
        cin >> s;
        int length = s.length();
        if(length == 1)
            {
            cout << "no answer" << endl;
            continue;
        }
        int i = length -1;
        for(; i >= 0 && s[i] <= s[i-1]; i--)
            ;
        if(i == 0)
            {
            cout << "no answer" << endl;
            continue;
        }
        int pivot = i-1;
        int j;
        for( j = i; j < length; j++)
            {
            if(s[j] <= s[pivot])
                break;
        }
        char temp = s[j-1];
        s[j-1] = s[pivot];
        s[pivot] = temp;
        sort(s.begin()+i, s.end());
        cout << s << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
