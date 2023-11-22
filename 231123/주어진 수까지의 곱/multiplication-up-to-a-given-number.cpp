#include <bits/stdc++.h>
using namespace std;

int main() {
    int mul=1;
    int a,b; cin >> a >> b;
    for(int i=a;i<=b;i++) mul*=i;
    cout << mul;
}