#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    char c; cin >> a >> c >> b;
    switch (c){
        case '+':
            cout << a << " " << c << " " << b << " = " << a+b;
            break;
        case '-':
            cout << a << " " << c << " " << b << " = " << a-b;
            break;
        case '*':
            cout << a << " " << c << " " << b << " = " << a*b;
            break;
        case '/':
            cout << a << " " << c << " " << b << " = " << a/b;
            break;
        default:
            cout << "False";
            break;
    }
}