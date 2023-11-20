#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<2;i++){
        int a; char c; cin >> a >> c;
        if(a>=19&&c=='M'){
            cout << 1; 
            return 0;
        }
    }
    cout << 0;
}