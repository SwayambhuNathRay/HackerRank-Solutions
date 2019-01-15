#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int size;
        cin >> size;
        int ans1 = 0;
        vector<int> arr(size, 0);
        for(int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int max_so_far = 0, ans_max = -1000;
        for(int j = 0; j < size; j++)
        {
            max_so_far += arr[j];
            if(max_so_far > ans_max)
            {
                ans_max = max_so_far;
            }
            if(max_so_far < 0)
            {
                max_so_far = 0;
            }
        }
        sort(arr.begin(), arr.end());
        if(arr[size-1] <= 0)
        {
            ans1 = arr[size-1];
        }
        else
        {
            int i = size-1;
            while(i >= 0 && arr[i] > 0)
            {
                ans1+=arr[i];
                i--;
            }
        }
        cout << ans_max << " " << ans1 << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
