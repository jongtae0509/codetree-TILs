#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    int s=0;
    for(int i=a;i<=b;i++){
        int j=i;
        if(i%3==0){
            s++;
            continue;
        }
        while(j>0){
            if(j%10==3||j%10==6||j%10==9){
                s++;
                break;
            }
            j/=10;
        }
    }
    cout << s;
}