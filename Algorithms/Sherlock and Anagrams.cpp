#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string a){
    // Complete this function
int ana = 0;
int diff = 1;
for(int i=0;i<a.size()-1;i++){
    vector<string> substrings(0);
    for(int j=0;j<a.size()-diff+1;j++){
        substrings.push_back(a.substr(j,diff));
    }
    for(int j=0;j<substrings.size();j++){
        sort(substrings[j].begin(),substrings[j].end());
    }
    for(int x=0;x<substrings.size();x++){
        for(int y=x+1;y<substrings.size();y++){
        if(substrings[x]==substrings[y]){
            ana++;
        }
    }
    }
    diff++;
}
return ana;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
