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
		int min=10000;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				int res=a[i]+a[j];
			if(abs(min) > abs(res)){ min=res;}
			}
		}
		cout<<min<<endl;
	}
return 0;
}
