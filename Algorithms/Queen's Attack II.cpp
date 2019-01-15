#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    int q_y, q_x;
    cin >> q_y >> q_x;
    vector<int> squares(8,0);
    squares[0] = n - q_y; //squares on top
    squares[1] = n - q_x; //squares on right
    squares[2] = q_y - 1; //squares on bottom
    squares[3] = q_x - 1; //squares on left
    squares[4] = min(n-q_y, n-q_x);
    squares[5] = min(n-q_x, q_y-1);
    squares[6] = min(q_y-1, q_x-1);
    squares[7] = min(q_x-1, n-q_y);
    
    int k_x, k_y;
    while(k--)
        {
        cin >> k_y >> k_x;
        if(k_x == q_x && k_y > q_y)
            {
            squares[0] = min(squares[0], k_y - q_y-1);
        }
        else if(k_x == q_x && k_y < q_y)
            {
            squares[2] = min(squares[2], q_y-k_y-1);
        }
        else if(k_y == q_y && k_x > q_x)
            {
            squares[1] = min(squares[1], k_x - q_x-1);
        }
        else if(k_y == q_y && k_x < q_x)
            {
            squares[3] = min(squares[3],  q_x - k_x - 1);
        }
        else if((k_x - q_x) == (k_y - q_y) && (k_x - q_x) > 0)
            {
            squares[4] = min(squares[4], k_x-q_x-1);
        }
        else if((k_x-q_x) == (q_y - k_y) && (k_x-q_x) > 0)
            {
            squares[5] = min(squares[5], q_y-k_y-1);
        }
        else if((k_x-q_x) == (k_y - q_y) && (k_x - q_x) < 0)
            {
            squares[6] = min(squares[6], q_y-k_y-1);
        }
        else if((k_x-q_x) == (q_y - k_y) && (k_x-q_x) < 0)
            {
            squares[7] = min(squares[7], q_x-k_x-1);
        }
    }
    int sum = 0;
    for(int i = 0; i < 8; i++)
        sum+=squares[i];
    cout<< sum << endl;
    //for(int i = 0; i < 8; i++)
    //    cout << squares[i] << " ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
