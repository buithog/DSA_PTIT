#include<bits/stdc++.h>
using namespace std;
int main(){
	while(t--){
		int n;
		cin>>n;
		int a[n],b[1000000];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		sort(a,a+n);
		cout<<b[a[n-1]]<<endl;
	}
}
