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
    int n;
    int k;
    cin >> n >> k;
    vector<int> x(n);
    int count = 0;
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }
    sort(x.begin(), x.end());
    for(int i = 0; i < n;)
        {
        int temp = x[i];
        if(i == n-1)
            {
            count++;
            break;
        }
        while(x[i] < temp+k && i < n)
            i++;
        if(x[i] == temp+k && i < n)
            {
            int tempo = x[i];
            while(x[i] <= tempo + k && i < n)
                i++;
            count++;
        }
        else
            {
            i--;
            int keep = x[i];
            while(x[i] <= keep+k && i < n)
                i++;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
