#include<bits/stdc++.h>
using namespace std;
int a[6],ok,chuaxet[6];
void quaylui(int i,int giatri){
	if(i == 5 && giatri == 23){
		ok=1;
		return ;
	}
	for(int j=0;j<=5;j++){
		if(chuaxet[j]){
		chuaxet[j]=0;
		quaylui(i+1,giatri +a[i]);
		quaylui(i+1,giatri*a[i]);
		quaylui(i+1,giatri -a[i]);
		chuaxet[j] =1;
		}
	}
}
int main(){
	int t,i;
	cin>>t;
	while(t--){
		for(int i=0;i<5;i++) cin>>a[i];
		ok=0;
		for(int i=0;i<5;i++){
			chuaxet[i] =1;
			quaylui(1,a[i]);
			chuaxet[i] =1;
		}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
