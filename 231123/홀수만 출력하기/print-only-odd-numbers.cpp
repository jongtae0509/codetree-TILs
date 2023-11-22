#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int t; cin >> t;
        if(t%3==0&&t%2==1) cout << t << '\n';
    }
}