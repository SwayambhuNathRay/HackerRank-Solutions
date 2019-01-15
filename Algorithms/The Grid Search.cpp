#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        int pos = 0;
        string res = "NO";
        for(int i = 0; i < R; i++){
            if(C-i < c)break;
            string row;
            row.assign(G[i], pos, C-pos);
            int found = row.find(P[0]);
            pos += (found>=0)?found+1:0;
            if(found != std::string::npos){
                for(int j = 1; j < r; j++){
                    string row1;
                    row1.assign(G[j+i],
                                pos-1, C-(pos-1));
                    int next= row1.find(P[j]);
                    if((next != string::npos)
                       && (next == 0)){
                        if(j == (r-1))
                            res.replace(res.begin(),
                                    res.end(),"YES");
                        continue;
                    }
                    break;
                }
                if(res == "YES")break;
                i -= (row.length()>=c)?1:0;
                continue;
            }
            pos = 0;
        }
        cout << res << endl;
    }
    return 0;
}
