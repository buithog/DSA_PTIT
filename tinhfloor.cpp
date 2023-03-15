#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,k;
		cin>>n>>k;
		long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		auto it = lower_bound(a,a+n,k);
		long index=it-a;
		if(index == 0 && a[0] >k) cout<<-1<<endl;
		if(a[index] == k) cout<<index+1<<endl;
		else
		cout<<index<<endl;
	}
}
