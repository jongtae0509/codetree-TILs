#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    long long int d[1000]={};
    d[0]=1;
    d[1]=1;
    d[2]=2;
    d[3]=5;
    for(int i=4;i<=35;i++){
        long long int sum=0;
        int k=i-1;
        for(int j=0;j<i;j++){
            sum+=d[j]*d[k--];
        }
        d[i]=sum;
    }
    cout << d[n];
}