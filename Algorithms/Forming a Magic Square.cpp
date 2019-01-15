#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int keep[8][9] = {
        {8,1,6,3,5,7,4,9,2},
        {6,1,8,7,5,3,2,9,4},
        {4,9,2,3,5,7,8,1,6},                  
        {2,9,4,7,5,3,6,1,8},
        {8,3,4,1,5,9,6,7,2},
        {4,3,8,9,5,1,2,7,6},
        {6,7,2,1,5,9,8,3,4},
        {2,7,6,9,5,1,4,3,8},      
    };
    int a[9];
    int temp;
    for(int i = 0; i < 9; i++)
        {
        cin >> temp;
        a[i] = temp;
    }
    int sum;
    int min=100;
    for(int i = 0; i < 8; i++)
        {
        sum = 0;
        for(int j = 0; j < 9; j++)
            {
            sum+=abs(keep[i][j] - a[j]);
        }
        min = min < sum? min:sum;
    }
    cout << min << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
