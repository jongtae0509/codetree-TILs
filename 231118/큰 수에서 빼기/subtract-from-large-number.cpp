#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[2];
    cin >> a[0] >> a[1];
    sort(a,a+2);
    cout << a[1]-a[0];
}