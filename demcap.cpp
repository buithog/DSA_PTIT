#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],b[k];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		for(int i=0;i<k;i++){
			cin>>b[i];
			}
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				if(pow(a[i],b[j]) > pow(b[j],a[i])) cnt++;
				}
			}
		cout<<cnt<<endl;
		}
		return 0;
	}
