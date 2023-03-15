#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long ans,ok=0;
		for(int i=0;i<n;i++){
			if(a[i] >a[i+1]){
			cout<<i+1<<endl;ok=1;
			break; 
			}
		}
		if(!ok) cout<<0<<endl;
	}
}
