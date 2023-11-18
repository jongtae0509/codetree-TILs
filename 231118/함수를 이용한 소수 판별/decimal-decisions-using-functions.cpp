#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    int sum=0;
    for(int i=a;i<=b;i++){
        bool check=0;
        for(int j=2;j<i;j++){
            if(i%j==0) check=1;
        }
        if(!check) sum+=i;
    }
    cout << sum;
}