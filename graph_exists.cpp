#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("output1.iitktv", "r", stdin);

    map<pair<string, string>, vector<int> > m;
    string s;
    int l = 1;
    while(cin >> s){
        string x;
        string y;
        cin >> x >> y;
        // cout << s << x << y << endl;
        m[make_pair(s, x)].push_back(l);
        l++;
    } 

    for(auto it:m){
        if(it.second.size() > 1){
            cout << it.first.first << " " << it.first.second << "\n\t";
            for(auto j : it.second)
                cout << j << " ";
            cout << endl;
        }
    }
    return 0;
}