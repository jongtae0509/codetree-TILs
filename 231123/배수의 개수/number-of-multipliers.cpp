#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt3=0;
    int cnt5=0;
    for(int i=0;i<10;i++){
        int t; cin >> t;
        if(t%3==0) cnt3++;
        if(t%5==0) cnt5++;
    }
    cout << cnt3 << ' ' << cnt5;
}