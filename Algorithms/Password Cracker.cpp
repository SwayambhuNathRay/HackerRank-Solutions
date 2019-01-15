#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <deque>
#include <climits>
using namespace std;



string password = "";
int m = INT_MAX;
string crackPassword(map<string, int> passwords, string loginAttempt) {

    if (loginAttempt.size()==0) {
        return password;
    }

    for (int i = 1; i <= loginAttempt.size();i++) {
        string tmp = loginAttempt.substr(0,i);
        if (passwords.find(tmp)!=passwords.end()) {
            password += tmp + " ";
            string newAttempt = loginAttempt;
            newAttempt.erase(0,i);
            m = newAttempt.size();
            crackPassword(passwords, newAttempt);
            if (m==0) 
            {
                return password;
            }
            else {
                return "WRONG PASSWORD";
            }

        }

    }

    if (m==0) 
    {
        return password;
    }
    else {
        return "WRONG PASSWORD";
    }
}


map<string, int>passwords;
int main()
{
    int t;
    cin >> t;


    while (t-->0) {
        int n;
        cin >> n;
        passwords.clear();
        password = "";
        m = INT_MAX;
        while (n-->0) {
            string pwd;
            cin >> pwd;
            if (passwords.find(pwd) == passwords.end()) {
                passwords[pwd] = 1;
            }
            else {
                passwords[pwd]++;
            }
        }
        string loginAttempt;
        cin >> loginAttempt;
        cout << crackPassword(passwords, loginAttempt) << endl;
    }
    return 0;
}