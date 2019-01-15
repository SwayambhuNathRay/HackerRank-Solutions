#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    string s;
    cin >> s;
    int len = s.length();
    vector<int> keep(len), make(len,0);
    unordered_map<int, int> mymap; 
    for(int i = 0; i < len; i++)
        {
        keep[i] = s[i] - 'a' + 1;
    }
    for(int i = 0; i < len; i++)
        {
        if(i!=0)
            {
            if(keep[i]==keep[i-1])
                make[i] = make[i-1]+keep[i];
            else
                make[i] = keep[i];
        }
        else
            make[i] = keep[i];
        mymap.insert({make[i],1});
    }
    int t;
    cin >> t;
    while(t--)
        {
        int k;
        cin >> k;
        unordered_map<int,int>::const_iterator got = mymap.find (k);
        if ( got == mymap.end() )
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
