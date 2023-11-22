#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt=0;
    for(int i=0;i<10;i++){
        int t; cin >> t;
        if(t%2==1) cnt++;
    }
    cout << cnt;
}