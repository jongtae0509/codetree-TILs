#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b; cin >> a >> b;
    long long k=1;
    for(int i=0;i<b;i++) k*=a;
    cout << k;
}