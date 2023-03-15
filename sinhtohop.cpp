#include<bits/stdc++.h>
using namespace std;
int ok=0,c[40],n,k;
void in(){
	for(int i=1;i<=k;i++) cout<<c[i];
	cout<<" ";
	}
void sinh(){
	int i=k;
	while(c[i] == n-k+i) i--;
	if(i == 0) ok = 1;
	else {
	c[i]++;
	for(int j=i+1;j<=k;j++)
	c[j] = c[j-1] +1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		c[i] = i;
		}
	while(!ok){
		in();
		sinh();
		}
	memset(c,0,sizeof(c));
	}
}
