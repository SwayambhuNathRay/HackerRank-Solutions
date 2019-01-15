#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, temp, count = 0;
    cin >> n >> k;
    vector<int> freq(k,0);
    while(n--)
        {
        cin >> temp;
        temp%=k;
        freq[temp]+=1;
    }
    for(int i = 1; i <= k/2; i++)
        {
        if(i!=k-i)
            count+=max(freq[i], freq[k-i]);
        else
            count+=1;
    }
    if(freq[0] != 0)
    	count += 1;
    cout << count << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
