#include <bits/stdc++.h>
using namespace std;
int main() {
    string a; cin >> a;
    string b="";
    for(int i=a.size()-1;i>=0;i--) b+=a[i];
    if(a==b) cout << "Yes";
    else cout << "No";
}