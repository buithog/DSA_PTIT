#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int x=0,y=1,dem=0;
	while(x<n-1&&y<n){
		if(a[x] >2*a[y]) {dem++;
			y++;
		}
		if(a[x]<2*a[y]) {
			x++;
			if(a[x]<a[x-1]) y++;
		}
	}
	cout<<dem<<endl;
}
