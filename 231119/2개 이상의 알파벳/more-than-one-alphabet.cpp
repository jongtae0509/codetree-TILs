#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[27]={};
    string s; cin >> s;
    for(int i=0;i<s.size();i++) a[s[i]-'a']++;
    int cnt=0;
    for(int i=0;i<27;i++) if(a[i]) cnt++;
    if(cnt>=2) cout << "Yes";
    else cout << "No";

}