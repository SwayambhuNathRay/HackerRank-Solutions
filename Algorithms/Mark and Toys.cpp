#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    multiset<int> keep;
    int temp;
    for(int i = 0; i < n; i++)
        {
        cin >> temp;
        keep.insert(temp);
    }
    multiset<int>::iterator it = keep.begin();
    int count = 0, sum = 0;
    while(it!=keep.end())
        {
        sum+=*it;
        if(k > sum)
            count++;
        else
            break;
        it++;
    }
    cout << count << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
