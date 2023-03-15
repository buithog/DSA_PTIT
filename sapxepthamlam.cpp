#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i] = a[i];
		}
		sort(b,b+n);
	bool ok=false;
		for(int i=0;i<n;i++){
			if(a[i] != b[i] && b[i] != a[n-i-1]){
			ok=true;
			cout<<"No"<<endl; break;
			}
		}
		if(!ok ) cout<<"Yes"<<endl;
	}
}
