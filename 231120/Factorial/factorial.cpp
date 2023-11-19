#include <bits/stdc++.h>
using namespace std;
int fac(int f){
    if(f==1) return 1;
    return fac(f-1)*f;
}
int main() {
    int n; cin >> n;
    cout << fac(n);
}