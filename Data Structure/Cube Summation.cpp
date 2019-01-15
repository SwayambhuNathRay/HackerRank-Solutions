#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

struct data
    {
    int x;
    int y;
    int z;
};

int main() {
    int T;
    cin >> T;
    while(T--)
        {
        int n, q;
        cin >> n >> q;
        unordered_map< string, long > mymap;
        vector<data> vec;
        while(q--)
            {
        string keep;
        cin >> keep;
        if(keep == "UPDATE")
            {
            int x, y, z, flag = 0;
            long value;
            cin >> x >> y >> z >> value;
            string key = to_string(x)+" "+ to_string(y)+" "+to_string(z);
            if(mymap.count(key)>0)
                {
                mymap.erase(key);
                flag = 1;
            }
            mymap.insert(make_pair(key, value));
            if(flag == 1)
                continue;
            data mydata;
            mydata.x = x;
            mydata.y = y;
            mydata.z = z;
            if(vec.size() == 0)
                vec.push_back(mydata);
            else
                {
                if(x > vec.back().x)
                    vec.push_back(mydata);
                else
                {
                auto it = vec.begin();
                while(it->x < x)
                    it++;
                vec.insert(it, mydata);
                }
            }
        }
            
        if(keep == "QUERY")
            {
            long sum = 0;
            int x1, y1, z1, x2, y2, z2;
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
            for(int i = 0 ; i < vec.size(); i++)
                {
                if(vec[i].x >= x1 && vec[i].x <= x2)
                    {
                    if(vec[i].y >= y1 && vec[i].y <= y2)
                        {
                        if(vec[i].z >=z1 && vec[i].z <=z2)
                            {
                            string check1 = to_string(vec[i].x)+" "+to_string(vec[i].y)+" "+to_string(vec[i].z);
                            sum+= mymap[check1];
                        }
                    }
                }
            }
            cout << sum << endl;
        }
        }
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}