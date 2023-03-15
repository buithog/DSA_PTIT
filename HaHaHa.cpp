#include<bits/stdc++.h>
using namespace std;
int ok=0,n; 
int b[30] = {0};
int check(){
	for(int i=1;i<=n;i++){
		if(b[i] == 1 && b[i +1] == 1) return 0;
		}
		if(b[n] == 1) return 0;
		if(b[1] == 0) return 0;
		return 1;
	}
void in(){
	for(int i=1;i<=n;i++){
		if(b[i] == 1) cout<<"H";
		else cout<<"A";
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
		cin>>n;
		while(!ok){
			if(check()) in();
			sinh();
			}
		ok=0;
		memset(b,0,sizeof(b));
		}
}
