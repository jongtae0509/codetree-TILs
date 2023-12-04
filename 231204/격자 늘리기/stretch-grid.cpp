#include <iostream>
using namespace std;
int main() {
    int n,m,k; cin >> n >> m >> k;
    char c[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> c[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int t=0;t<k;t++){
                cout << c[i][j];
            }
        }
        cout << '\n';
        for(int j=0;j<m;j++){
            for(int t=0;t<k;t++){
                cout << c[i][j];
            }
        }
        cout << '\n';
    }
}