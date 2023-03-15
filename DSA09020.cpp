#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1001][1001] = {0};
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		a[x][y] = 1;
		a[y][x] = 1;
	
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
