#include<bits/stdc++.h>
using namespace std;
int n,a[100] = {0},ok;
int check(){
	for(int i=1;i<=n;i++){
		if(a[i] == 1 && a[i +1] == 1) return 0;
		}
		if(a[n] == 1) return 0;
		if(a[1] == 0) return 0;
		return 1;
	}
void in(){
	for(int i=1;i<=n;i++){
		if(a[i] == 1) cout<<"H";
		else cout<<"E";
		}
		cout<<endl;
	}
void khoitao(){
	memset(a,0,sizeof(a));
	ok=0;
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
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		khoitao();
		while(!ok){
			if(check()) in();
			sinh();
			}
		}
}

