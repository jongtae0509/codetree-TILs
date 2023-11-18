#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if(n%2==0){
        int a=n%10;
        n/=10;
        if((a+n)%5==0) cout << "Yes";
        else cout << "No";
    }   
}