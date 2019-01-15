
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

void median(vector<char> s,vector<long long> X) {
    multiset<long long > my_set;
    multiset<long long >::iterator middle = my_set.begin();
    for(int i = 0; i < s.size(); i++)
        {
        
        long long num = X[i];
        if(s[i] == 'a')
            {
            my_set.insert(X[i]);
            if(my_set.size() == 1)
                middle = my_set.begin();
            else if(my_set.size() % 2 == 1)
                {
                if(num >= *middle)
                    {
                    middle++;
                }
            }
            else
                {
                if(num < *middle)
                    {
                    middle--;
                }
            }
             
        }
        else
            {
            multiset<long long>::iterator got = my_set.find(num);
            if(got!= my_set.end() and my_set.size()!= 0)
                {
                if(my_set.size()%2 == 0)
                    {
                    if(num <= *middle)
                        middle++;
                }
                else
                    {
                    if(num > *middle or middle == got)
                        {
                        if(middle!=my_set.begin())
                            middle--;
                    }
            }
            my_set.erase(my_set.equal_range(num).first);
              
            }
            else
                {
                cout << "Wrong!" << endl;
                continue;
            }
        }
        //cout << *middle << " p" << endl;
    
        if(my_set.empty())
            {
            cout << "Wrong!" << endl;
        }
        else if(my_set.size()%2 == 1)
            cout << *middle << endl;
        else
            {
            //cout << " now " << endl;
            auto next = middle;
            next++;
            //cout << *middle << " - " << *(next++) << endl;
            long long median = *(middle) + *(next);
            if(median % 2 == 0)
                cout << median / 2 << endl;
        else if(median == -1)
                cout << "-0.5" << endl;
        else
            cout << median / 2 << ".5" << endl;
        }
}
}
int main(void){

//Helpers for input and output

   int N;
   cin >> N;
   
   vector<char> s;
    vector<long long> X;
   char temp;
   long long tempint;
   for(int i = 0; i < N; i++){
      cin >> temp >> tempint;
        s.push_back(temp);
        X.push_back(tempint);
   }
   
   median(s,X);
   return 0;
}
