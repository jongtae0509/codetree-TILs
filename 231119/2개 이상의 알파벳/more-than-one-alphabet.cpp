#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[27]={};
    string s; cin >> s;
    for(int i=0;i<s.size();i++){
        if(!a[s[i]-'a']){
            cout << "Yes";
            return 0;
        }
        a[s[i]-'a']++;
    }
    cout << "No";

}