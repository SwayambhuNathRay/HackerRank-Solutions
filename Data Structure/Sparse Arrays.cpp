#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    
    int T, N;
    cin >> T;
    string* a = new string[T];
    for(int i = 0; i<T; i++)
        cin >> a[i];
    cin >> N;
    string* b = new string[N];
    for(int j= 0; j<N; j++)
        cin >> b[j];
    for(int k = 0; k < N ;k++)
        {
       int temp = 0;
        for(int l = 0; l< T; l++)
            {
            if(a[l]==b[k])
                temp++;
        }
        cout << temp << endl;
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
