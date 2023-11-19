#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    string b; cin >> b;
    int t=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==b[t]){
            t++;
            if(t==b.size()){
                cout << i-b.size()+1;
                return 0;
            }
        }
        else t=0;
        //cout << t;
    }
    cout << -1;
}