#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a=0;
    for(int i=1;i<=n;i++) a+=i;
    cout << a/10;
}