#include<bits/stdc++.h>
using namespace std;
int ok=0,n,k; 
int b[30] = {0};
int check(){
	int s=0;
	for(int i=1;i<=n;i++){
		s+=b[i];
		}
		if(s == k) return 1;
		else return 0;
	}
void in(){
	for(int i=1;i<=n;i++){
		cout<<b[i];
		}
		cout<<endl;
	}
void sinh(){
	int i= n;
	while(b[i] ==1 && i>0){
		b[i] = 0;
		i--;
		}
	if(i == 0) ok=1;
	else b[i] = 1;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n>>k;
	while(!ok){
		if(check()) in();
		sinh();
		}
	memset(b,0,sizeof(b));
	ok=0;
	}
}
