#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
    {
    int t;
    cin >> t;
    while(t--)
        {
        int m, n;
        cin >> m;
        cin >> n;
        //cout << n << "n" << m <<"m"<< endl;
        unordered_map< int , vector<int> > my_map;
        for(int i = 0 ; i < n; i++)
            {
            int k;
            cin >> k;
            unordered_map<int,vector<int> >::iterator got = my_map.find (k);
            if(my_map.empty())
                {
                vector<int> vec;
                vec.push_back(i+1);
                my_map.insert(make_pair(k, vec));
            }
            else if(got== my_map.end())
                {
                vector<int> vec1;
                vec1.push_back(i+1);
                my_map.insert(make_pair(k, vec1));
            }
            else
                got->second.push_back(i+1);
        }
        unordered_map<int , vector<int> >::iterator it = my_map.begin();
        while(it!=my_map.end())
            {
            int f = it->first;
            //cout << f << " f" << endl;
            int fu = m - f;
            unordered_map<int,vector<int> >::iterator gt = my_map.find (fu);
            if(gt == my_map.end())
                {
                it++;
                continue;
            }
            else
                {
                if(f == gt->first)
                    {
                    if(gt->second.size() >= 2)
                        {
                    cout << my_map[fu][0] << " " << my_map[fu][1] << endl;
                    break;
                    }
                    it++;
                }
                else
                    {
                    if(my_map[f][0] <= my_map[fu][0])
                        cout << my_map[f][0] << " " << my_map[fu][0] << endl;
                    else
                        cout << my_map[fu][0] << " " << my_map[f][0] << endl;
                    break;
                }
            }
        }
    }
}
