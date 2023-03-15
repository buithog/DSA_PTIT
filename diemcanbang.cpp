#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			}
		int index=0;int s=0;
		for(int i=0;i<n;i++){
			 s+=a[i];
			if(s==sum-s+a[i]) {cout<<i+1<<endl;index =1;break;}
			
			} if(index == 0) cout<<-1<<endl;
	}
}
