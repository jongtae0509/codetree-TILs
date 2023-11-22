#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    int sum=0;
    int t;
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    for(int i=a;i<=b;i++){
        if(i%2==0) sum+=i;
    }
    cout << sum;
}