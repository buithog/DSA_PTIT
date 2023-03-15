#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,s;
		cin>>n>>s;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ll dem=0;
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				auto it=lower_bound(a+j+1,a+n,s-a[i]-a[j]) -a;
				dem+=it-j-1;
			}
		}
		cout<<dem<<endl;
	}
}
