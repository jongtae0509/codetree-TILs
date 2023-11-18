#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    int c = (b*10000)/(a*a);
    cout << c << "\n";
    if(c>=25) cout << "Obesity";
}