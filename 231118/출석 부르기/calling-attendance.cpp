#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    switch (n){
        case 1:
            cout <<"John";
            break;
        case 2:
            cout << "Tom";
            break;
        case 3:
            cout << "Paul";
            break;
        default:
            cout << "Vacancy";
            break;
    }
}