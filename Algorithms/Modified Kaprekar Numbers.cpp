#include <cmath>
#include <cstdio>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long p, q;
    cin >> p >> q;
    int flag = 0;
    for(long long i = p; i <= q; i++)
        {
        long long square = i*i;
        string str = to_string(i);
        string str1 = to_string(square);
        int d = str.length();
        int d2 = str1.length();
        int ten = 10;
        d--;
        while(d--)
            {
            ten*=10;
        }
        long long num1 = square%ten;
        long long num2 = square/ten;
        if(num1+num2 == i)
            {
            flag = 1;
            cout << i << " ";
            continue;
        }
    }
    if(flag == 0)
        cout << "INVALID RANGE" << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
