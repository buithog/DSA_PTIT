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
			b[i] =a[i];
		}
		sort(b,b+n);
		int r=0;
		int l=0,ok=0;
		for(int i=1;i<n;i++){
			if(a[i] <a[i-1])
			ok=1; break;
		}
		if(ok == 0){
		cout<<-1<<endl;
		continue;
			}
		for(int i=n-1;i>0;i++){
			if(a[i] == b[i]){
				r=i;
				break;
			} 
		}
		for(int i=0;i<n;i++){
			if(a[i] < a[r]){
				l=i;
				break;
			}
		}
		cout<<r-l<<endl;
		}
	}

