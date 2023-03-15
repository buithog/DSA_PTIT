#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,k;
		cin>>n>>k;
		int tmp=n+k;
		long a[n+k];
		for(int i=0;i<n+k;i++){
			cin>>a[i];
			}
		sort(a,a+tmp);
		for(int i=0;i<n+k;i++){
			cout<<a[i]<<" ";
			}
		cout<<endl;
	}
return 0;
}
