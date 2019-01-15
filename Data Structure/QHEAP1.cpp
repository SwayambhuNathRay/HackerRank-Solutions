#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;


int main() {
    vector<int> vec;
    int n;
    cin >> n;
    while(n--)
        {
        int t, i = 0;
        cin >> t;
        if(t==1)
            {
            int temp;
            cin >> temp;
            int size = vec.size();
            if(size == 0)
                vec.push_back(temp);
            else
                {
                while(temp < vec[i] && i < size)
                    i++;
                vec.insert(vec.begin() + i, temp);
            }
        }
        else if(t==2)
            {
            int del;
            cin >> del;
            int j = 0;
            while(j < vec.size() && del!=vec[j])
                j++;
            vec.erase(vec.begin() + j);
        }
        else
            cout << vec[vec.size() - 1] << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
