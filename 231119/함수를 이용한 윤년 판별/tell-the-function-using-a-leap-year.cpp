#include <bits/stdc++.h>
using namespace std;
int main() {
    int y; cin >> y;
    bool check=0;
    if(y%4==0){
        if(y%100==0){
            if(y%400==0) check=1;
        }
        else check=1;
    }
    if(check)cout << "true";
    else cout << "false";
}