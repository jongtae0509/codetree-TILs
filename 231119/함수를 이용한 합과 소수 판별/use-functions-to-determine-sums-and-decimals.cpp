#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b; cin >> a >> b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        bool check=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                check=1;
                break;
            }
        }
        if(!check){
            int t=i;
            int sum=0;
            while(t>0){
                sum+=t%10;
                t/=10;
            }
            if(sum%2==0) cnt++;
        }
    }
    cout << cnt;
}