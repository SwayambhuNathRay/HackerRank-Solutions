#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    vector<int> num(29);
    for(int i=0;i<29;i++)
        num[i]=i+1;
    vector<string> words(29);
    words[0]="one";
    words[1]="two";
    words[2]="three";
    words[3]="four";
    words[4]="five";
    words[5]="six";
    words[6]="seven";
    words[7]="eight";
    words[8]="nine";
    words[9]="ten";
    words[10]="eleven";
    words[11]="twelve";
    words[12]="thirteen";
    words[13]="fourteen";
    words[14]="fifteen";
    words[15]="sixteen";
    words[16]="seventeen";
    words[17]="eighteen";
    words[18]="nineteen";
    words[19]="twenty";
    for(int i=20;i<29;i++)
        words[i]="twenty "+words[i-20];
    if(m<30 && m!=00 && m!=15)
        cout<<words[m-1]<<" minutes past "<<words[h-1];
    else if(m>30 && m!=45)
        cout<<words[59-m]<<" minutes to "<<words[h];
    else if(m==00)
        cout<<words[h-1]<<" o' clock";
    else if(m==15)
        cout<<"quarter past "<<words[h-1];
    else if(m==45)
        cout<<"quarter to "<<words[h];
    else if(m==30)
        cout<<"half past "<<words[h-1];
    return 0;
}