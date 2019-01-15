#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string s1, string s2) {
    int n = s1.length() + 1;
    vector < vector <int> > keep(n, vector<int> (n, 0));
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                keep[i][j] = keep[i-1][j-1] + 1;
            }
            else
            {
                keep[i][j] = max(keep[i-1][j], keep[i][j-1]);
            }
        }
    }
    return keep[n-1][n-1];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
