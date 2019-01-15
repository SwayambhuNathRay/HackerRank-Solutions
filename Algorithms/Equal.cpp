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
        int n;
        cin >> n;
        vector<int> keep(n, 0);
        int minimum = 100000;
        for(int i = 0; i < n; i++)
        {
            cin >> keep[i];
            minimum = min(keep[i], minimum);
        }
        vector<int> naw(n, 0);
        for(int i = 0; i < n; i++)
        {
            naw[i] = keep[i] - minimum;
        }
        int max1 = 0, max2 = 0, max3 = 0;
        for(int i = 0; i < n; i++)
        {
            int temp = 0;
            int choc = naw[i];
            while(choc>0)
            {
                if(choc/5 != 0)
                {
                    temp+=choc/5;
                    choc%=5;
                }
                else if(choc/2 != 0)
                {
                    temp+=choc/2;
                    choc%=2;
                }
                else
                {
                    temp+=choc;
                    choc = 0;
                }
            }
            max1+=temp;
            temp = 0;
            choc = naw[i] + 1;
            while(choc>0)
            {
                if(choc/5 != 0)
                {
                    temp+=choc/5;
                    choc%=5;
                }
                else if(choc/2 != 0)
                {
                    temp+=choc/2;
                    choc%=2;
                }
                else
                {
                    temp+=choc;
                    choc = 0;
                }
            }
            max2 += temp;
            temp = 0;
            choc = naw[i] + 2;
            while(choc>0)
            {
                if(choc/5 != 0)
                {
                    temp+=choc/5;
                    choc%=5;
                }
                else if(choc/2 != 0)
                {
                    temp+=choc/2;
                    choc%=2;
                }
                else
                {
                    temp+=choc;
                    choc = 0;
                }
            }
            max3 += temp;
        }
        cout << min(max1, min(max2, max3)) << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
