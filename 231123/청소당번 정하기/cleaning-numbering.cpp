#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a,b,c;
    a=b=c=0;
    for(int i=1;i<=n;i++){
        if(i%12==0) c++;
        else if(i%3==0) b++;
        else if(i%2==0) a++;
    }
    cout << a << ' ' << b << ' ' << c;
}