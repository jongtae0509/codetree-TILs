#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    int s=0;
    for(int i=a;i<=b;i++){
        int j=i;
        while(j>0){
            if((j%10)%3==0){
                s++;
            }
            j/=10;
        }
    }
    cout << s;
}