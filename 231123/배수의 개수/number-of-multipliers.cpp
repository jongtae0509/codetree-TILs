#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt=0;
    for(int i=0;i<10;i++){
        int t; cin >> t;
        if(t%3==0||t%5==0) cnt++;
    }
    cout << cnt;
}