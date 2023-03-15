#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,l;
		cin>>n>>k>>l;
		long a[n+k];
		for(int i=0;i<n+k;i++){
			cin>>a[i];		
		}
		sort(a,a+n+k);
		cout<<a[l-1]<<endl;
	}
}
