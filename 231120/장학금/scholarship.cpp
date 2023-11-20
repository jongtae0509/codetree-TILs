#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin >> a >> b;
    int sum=0;
    if(a>=90){
        if(b>=95) sum+=100000;
        else if(b>=90) sum+=50000;
    }
    cout << sum;
}