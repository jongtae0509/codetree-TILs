#include <bits/stdc++.h>
using namespace std;
int main() {
    int c=0;
    for(int i=0;i<3;i++){
        int t; char cc;
        cin >> cc >> t;
        if(cc=='Y'){
            if(t>=37) c++;
        }
    }
    if(c>=2) cout << 'E';
    else cout << 'N';
}