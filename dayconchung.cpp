#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,m,k;
		cin>>n>>m>>k;
		long a[n],b[m],c[k];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		for(int i=0;i<k;i++) cin>>c[i];
		long i=0,j=0,q=0;
		vector<int> v;
		while(i<=n && j<=m && q<=k){
			if(a[i] == b[j] && b[j] == c[q]) {
				v.push_back(a[i]);
				i++;j++;q++;
			}
			else if(a[i] <= b[j] && a[i] <= c[q]) i++;
			else if(b[j] <= a[i] && b[j] <= c[q]) j++;
			else  q++;
		}
		if(v.size() == 0) cout<<"NO"<<endl;
		else{
		for(auto  x:v) cout<<x<<" ";
			cout<<endl;
		}
	}
}
