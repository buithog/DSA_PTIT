#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long res2 = 0,res1=0;;
		for(int i=0;i<n;i++){
			if(i%2 == 0){
				res1 = res1+a[i]*10;
			}
			else 
			 res2 =res2 + a[i]*10;
		}
		cout<<res1+res2<<endl;
	}
}
