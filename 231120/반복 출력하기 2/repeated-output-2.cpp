#include <bits/stdc++.h>
using namespace std;
void n(int a){
    if(a==0) return;
    n(a-1);
    cout << "HelloWorld\n";
    
}
int main() {
    int c; cin >> c;
    n(c);
}