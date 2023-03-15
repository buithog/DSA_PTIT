#include<bits/stdc++.h>
using namespace std;
int main(){
	int res = 0,n;
	int a[n],vs[100001] = {0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		vs[a[i]] = vs[a[i] -1 ] +1;
		res = max(vs[a[i]] , res);
	}
	cout<<n-res<<endl;

}
