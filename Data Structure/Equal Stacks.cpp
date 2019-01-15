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
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
    }
    int flag=0;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int size1 = h1.size(), size2 = h2.size(), size3 = h3.size();
    unordered_map<int, int> stack1, stack2, stack3;
    for(int i = 0; i < size1; i++)
        {
        sum1+= h1.back();
        h1.pop_back();
        int temp1 = sum1;
        stack1.insert( std::make_pair(temp1, 1) );
    }
    for(int i = 0; i < size2; i++)
        {
        sum2+= h2.back();
        h2.pop_back();
        int temp2 = sum2;
        unordered_map<int,int>::const_iterator got = stack1.find (sum2);
        if(got != stack1.end())
            stack2.insert( std::make_pair(temp2, 1) );
    }
    for(int i = 0; i < size3; i++)
        {
        sum3+= h3.back();
        h3.pop_back();
        int temp3 = sum3;
        unordered_map<int,int>::const_iterator get = stack2.find (sum3);
        if(get != stack2.end())
            {
            flag++;
            stack3.insert( std::make_pair(temp3, 1) );
        }
    }
    if(flag==0)
        {
        cout << 0 << endl;
        return 0;
    }
    vector<int> keep;
    for(unordered_map<int,int>::const_iterator get = stack3.begin(); get!=stack3.end(); get++)
        keep.push_back(get->first);
    
    cout << *(max_element(keep.begin(), keep.end())) << endl;
    
    return 0;
}
