#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		sort(a,a+n);
		if(a[0] ==a[1] ) cout<<-1<<endl;
		else cout<<a[0]<<" "<<a[1]<<endl;
		}
	}
