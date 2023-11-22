#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    int c=a;
    for(int i=a;i<=b;i++){
        if(c%2==0) c+=3;
        else c*=2;
    }
    cout << c;
}