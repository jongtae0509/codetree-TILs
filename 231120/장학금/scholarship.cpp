#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin >> a >> b;
    int sum=0;
    if(a>=95) sum+=10;
    else if(a>=90) sum+=5;
    if(b>=95) sum+=10;
    else if(b>=90) sum+=5;
    cout << sum;
}