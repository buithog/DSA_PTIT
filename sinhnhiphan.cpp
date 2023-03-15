#include<bits/stdc++.h>
using namespace std;
int ok=0,n; 
int a[30] = {0};
int check(){
	if(a[1] != 1 ) return 0;
	if(a[n] != 0) return 0;
	for(int i=2;i<=n-1;i++){
		if(a[i] == 1  && a[i+1] == 1) return 0;	
	}
	for(int i=1;i<=n-3;i++){
		if(a[i] == 0 && a[i+1] == 0 && a[i+2] == 0) return 0;
	}
	return 1;
	}
void in(){
	for(int i=1;i<=n;i++){
		if(a[i] == 1) cout<<"8";
		else cout<<"6";
		}
		cout<<endl;
	}
void sinh(){
	int i= n;
	while(a[i] ==1 && i>0){
		a[i] = 0;
		i--;
		}
	if(i == 0) ok=1;
	else a[i] = 1;
	}
int main(){
	cin>>n;
	if(n>=6){
	while(!ok){
		if(check()) in();

		sinh();
		}
	}
	else cout<<"-1"<<endl;
}


