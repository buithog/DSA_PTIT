#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		map<int ,int>mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			}
		int dem=0;
		for(int i=0;i<n;i++){
			if(a[i] == k-a[i]){
				dem+= mp[a[i]]-1;
				}
			else 
			dem+= mp[k-a[i]];
		}
		dem/=2;
		cout<<dem<<endl;
	}
}
