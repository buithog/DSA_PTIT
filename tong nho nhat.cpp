#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long tong1=0,tong2=0;
		for(int i=0;i<n;i++){
			if(i %2 ==0) tong1=tong1*10 + a[i];
			if(i %2 != 0) tong2 = tong2*10 + a[i];
		}
		cout<< tong1+tong2<<endl;
	}
}
