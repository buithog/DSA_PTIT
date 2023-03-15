#include<bits/stdc++.h>
using namespace std;
int a[20][20], n,x[20],fopt =1e9,xopt[20],cmin,cost;
bool chuaxet[20];
void quaylui(int i){
	for(int j=2;j<=n;j++){
		if(chuaxet[j]){
			x[i] = j;
			chuaxet[j] = false;
			cost+= a[x[i-1]][x[i]];
			if(i==n){
				int v = cost+ a[x[n]][x[1]];
				fopt = min(fopt,v);
			}
			else if(cost + cmin* (n-i+1)<fopt){
				quaylui(i+1);
			}
			cost -= a[x[i-1]][x[i]];
			chuaxet[j] =true;
		}
	}
}
int main(){
	int i,j;
	cin >> n;
	for( i=1;i<=n;i++){
		for( j= 1; j<=n ;j++){
			cin>>a[i][j];
			if(i != j) cmin = min(cmin , a[i][j]);
		}
	}
	x[1] =1;
	for( i=0;i<=n;i++){
		chuaxet[i] = true;}
		quaylui(2);
		cout<<fopt<<endl;
}
