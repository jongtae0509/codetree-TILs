#include <bits/stdc++.h>
using namespace std;
bool iss(int arr[],int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]) return false;
	}
	return true;
}
int main() {
    int n; cin >> n;
    int arr[200];
    bool check=0;
    int w=-1;
    int cnt=0;
    for(int i=0;i<n;i++) cin >> arr[i];
    while(1){
    	if(iss(arr,n)) break;
        for(int i=0;i<n-1;i++){
            if(w>=0&&arr[i]>arr[w]){
                int t=arr[i];
                arr[i]=arr[w];
                arr[w]=t;
                cnt++;
            }
            if(arr[i]>arr[i+1]){
                w=i+1;
                check=1;    
            }
        }
    }
    cout << cnt;
    
}