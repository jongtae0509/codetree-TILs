#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int sum=0;
    for(int i=0;i<n;i++){
        int t; cin >> t;
        sum+=t;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum/cnt;
}