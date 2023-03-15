#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		set<int> v;
		for(int i=0;i<n;i++){
			while(a[i]>0){
				int x=a[i]%10;
				v.insert(x);
				a[i]= a[i]/10;
			}
		}
		for(int x:v){
			cout<<x<<" ";
			}
			cout<<endl;
	}
}
