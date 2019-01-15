#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find(int x, int n, int start)
    {
    if(x < 0)
        return 0;
    else if(x == 0)
        return 1;
    else
        {
        int sum = 0, keep = pow(x, 1.0/n);
        for(int i = start; i <= keep + 1; i++)
            {
            sum+= find(x - pow(i,n), n, i+1);
        }
        return sum;
    }
}


int main() {
    int x;
    float n;
    cin >> x >> n;
    int ans = find(x, n, 1);
    cout << ans << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
