#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int l,r;
		if(k > n-k){
			l=n-k;
			}
		else {
			l=k;
		}
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int summin=0,summax=0;
		for(int i=0;i<l;i++){
			summin+=a[i];
		}
		for(int i=l;i<n;i++){
			summax+=a[i];
		}
		int res=abs(summax-summin);
		cout<<res<<endl;
	}
}
