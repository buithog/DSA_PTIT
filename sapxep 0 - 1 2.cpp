#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
			sort(a,a+n);
		for(auto it : a){
			cout<<it<<" ";
			}
		cout<<endl;
		}
		return 0;
	}
		
