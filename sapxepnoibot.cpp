#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int ok=1;
		
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				ok=0;
				swap(a[j],a[j+1]);
			}
		}
		if(ok) break;
		cout<<"Buoc "<<i+1<<": ";
		for(int x=0;x<n;x++){
			cout<<a[x]<<" ";
		}
		cout<<endl;
		
	}
}
