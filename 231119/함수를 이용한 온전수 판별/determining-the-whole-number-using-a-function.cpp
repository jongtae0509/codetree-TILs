#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b; cin >> a >> b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i%2==0) continue;
        if(i%10==5) continue;
        if(i%3==0&&i%9!=0) continue;
        cnt++;
    }
    cout << cnt;
}