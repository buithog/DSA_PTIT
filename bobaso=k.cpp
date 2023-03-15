#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		int ok=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			int x = k- a[i] -a[j];
			if(binary_search(a,a+n,x)){
			 ok=1;
			 break;
			 			 }
			}
		}
	if(ok == 0 ) cout<<"NO"<<endl;
	else cout<<"Yes"<<endl;
}
}
