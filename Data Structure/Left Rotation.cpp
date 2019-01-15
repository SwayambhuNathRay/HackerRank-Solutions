#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T, d, temp =0;
    cin >> T >> d;
    int *a = new int[T];
    for(int i =0; i< T; i++)
        cin >> a[i];
    for(int j = d; j < T; j++)
        cout << a[j] << " ";
    for(int k = 0; k <d; k++)
        cout << a[k] << " ";
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
