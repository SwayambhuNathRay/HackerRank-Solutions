#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> petrol;
    vector<int> distance;
    for(int i = 0; i < n; i++)
        {
        int a, b;
        cin >> a >> b;
        petrol.push_back(a);
        distance.push_back(b);
    }
    
    int start = 0;
    int end = 1;
    int current_petrol = petrol[0] - distance[0];
    while(current_petrol < 0 || start!=end)
        {
        while(current_petrol < 0 && start!=end)
            {
            current_petrol = current_petrol - petrol[start] + distance[start];
            start = (start+1)%n;
        }
        current_petrol +=petrol[end] - distance[end];
        end = (end+1)%n;
    }
    cout << start << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
