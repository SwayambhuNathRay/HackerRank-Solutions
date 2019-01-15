#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        {
        int t;
        cin >> t;
        if(t==1)
            {
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }
        if(t==2)
            {
            vec.erase(vec.begin());
        }
        if(t==3)
            {
            cout << vec.front() << endl;
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
