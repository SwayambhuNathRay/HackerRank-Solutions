#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;



void printKMax(int arr[], int n, int k)
{
    std::deque<int>  Qi(k);
 
    int i;
    for (i = 0; i < k; ++i)
    {
        
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();  
 
        Qi.push_back(i);
    }
    int kmin = 2000000000;
    for ( ; i < n; ++i)
    {
        
        kmin = kmin < arr[Qi.front()]?kmin:arr[Qi.front()];
 
        while ( (!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front(); 
 
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
 
        Qi.push_back(i);
    }
 
    kmin = kmin < arr[Qi.front()]?kmin:arr[Qi.front()];
    cout << kmin << endl;
}

int main() {
   int n, q;
    cin >> n >> q;
    int *arr= new int[n];
    for(int i = 0; i < n; i++)
        {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    
    while(q--)
        {
        int size;
        cin >> size;
        printKMax(arr, n, size);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
