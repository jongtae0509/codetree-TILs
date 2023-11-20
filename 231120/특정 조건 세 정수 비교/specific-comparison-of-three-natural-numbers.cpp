#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3],b[3];
    for(int i=0;i<3;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+3);
    if(a[0]==b[0]) cout << 1 << ' ';
    else cout << 0 << ' ';
    if(a[0]==a[1]&&a[1]==a[2]) cout << 1;
    else cout << 0;
}