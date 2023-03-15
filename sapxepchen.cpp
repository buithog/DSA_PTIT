#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
	int key,j;
	cout<<"Buoc 0: "<<a[0]<<endl;
	for(int i=1;i<n;i++){
		 key = a[i];j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
				j--;
			}
		a[j+1] = key;
		cout<<"Buoc "<< i <<": ";
		for(int x=0;x<i+1;x++){
			cout<<a[x]<<" ";
			}
		cout<<endl;
	}
}

