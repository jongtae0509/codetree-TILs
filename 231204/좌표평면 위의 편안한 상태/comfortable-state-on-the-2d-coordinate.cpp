#include <bits/stdc++.h>
using namespace std;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int arr[2000][2000];

int check(int x,int y){
    int sum=0;
    for(int dir=0;dir<4;dir++){
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        if(nx<0||ny<0||arr[x][y]==0) continue;
        if(arr[nx][ny]==1) sum++;
    }
    return sum;
}
int main() {
    //점을 찍었을 때 그 점의 범위 안에 있는 애들만 검색 3개 넘은애들은 --
    int n; cin >> n;
    queue<pair<int,int>> q;
    int aa=0;
    //for(int i=0;i<n;i++) for(int j=0;j<n;j++) arr[i][j]=-1;
    for(int i=0;i<n;i++){
        int x,y; cin >> y >> x;
        y--,x--;
        arr[x][y]=1;    //점을 찍었어요
        if(check(x,y)==3) aa++;
        else if(check(x,y)>3) aa--;
        for(int dir=0;dir<4;dir++){
            int nx=x+dx[dir];
            int ny=y+dy[dir];
            if(check(nx,ny)==3) aa++;
            else if(check(nx,ny)>3) aa--;
        }
        cout << aa << '\n';
    }
}