#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n;
    cin >> n;
    long long i = 3;
    while(i < n)
        i = i*2 + 3;
    cout << i - n + 1 << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
