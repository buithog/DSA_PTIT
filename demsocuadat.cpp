#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	int dem1=0,dem2=0;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i] < 0) dem1++;
		if(a[i]=>0) dem2++;
	}
	cout<<dem1<<" "<<dem2;
}
