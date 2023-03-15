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
			cin>>a[i];}
			sort(a,a+n);
			int min=100000;
		for(int i=0;i<n-2;i++){
			int x=abs(a[i]-a[i+1]);
			if(x<min) min=x;
		}
		cout<<min<<endl;
	}
}

