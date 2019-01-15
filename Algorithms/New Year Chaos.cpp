#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int q;
    cin >> q;
    while(q--)
        {
        int size;
        cin >> size;
        vector<int> vec(size);
        for(int i = 0; i < size; i++)
            cin >> vec[i];
        int sum = 0, flag = 0;
        for(int i = vec.size() - 1; i >= 0; i--)
            {
            if((vec[i] - i - 1) > 2)
                {
                cout << "Too chaotic" << endl;
                flag = 1;
                break;
            }
            else
                {
                for(int j = max(0, vec[i] - 2); j < i; j++)
                    if(vec[j] > vec[i])
                    sum++;
            }
        }
        if(flag == 0)
            cout << sum << endl;
    }
        // your code goes here
    return 0;
}
