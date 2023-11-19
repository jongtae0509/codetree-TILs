#include <bits/stdc++.h>
using namespace std;
int main() {
    int sum=0;
    int n; cin >> n;
    while(n>0){
        sum+=(n%10)*(n%10);
        n/=10;
    }
    cout << sum;
}