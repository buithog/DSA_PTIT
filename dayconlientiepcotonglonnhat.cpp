#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int sum=0,s=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s=max(a[i],s+a[i]);
			sum=max(s,sum);
		}
		cout<<sum<<endl;
	}
}
