#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin>>n;
		int a[n];
		int m = INT_MIN;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m=max(m,a[i]);
		}
		int res=1;
		int dem =0;
		for(int i=0;i<n;i++){
			if(a[i] == m){
				dem++;
			}
			else dem=0;
			res=max(res,dem);
		}
		cout<<res<<endl;
}
