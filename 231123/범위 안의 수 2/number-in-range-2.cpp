#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum=0,cnt=0;
    for(int i=0;i<10;i++){
        int t; cin >> t;
        if(t>=0&&t<=200){
            cnt++;
            sum+=t;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum/cnt;
}