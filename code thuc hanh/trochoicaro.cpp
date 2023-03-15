#include<bits/stdc++.h>
using namespace std;
string l;
int n,a[20],m;
bool check(){
	int max1=0,max2=0,dem1=0,dem2=0;
	for(int i=1;i<=n;i++){
			if(a[i]==m){
			dem1++;
			if(dem1>max1){
				max1=dem1;
			}
			dem2 =0;
		}
		else {
			dem2++;
			if(dem2>max2){
				max2=dem2;
			}
			dem1=0;
		}
	}
	if(max1>= 5 && max1>max2){
		return true;
	}
	return false;
}
void in(){
	if(check()){
		for(int i=1;i<=n;i++){
			if(a[i] == 0) cout<<"O";
			else cout<<"X";
		}
		cout<<endl;
	}
}
void quaylui(int i){
	for(int j=0;j<=1;j++){
		a[i] =j;
		if(i==n) in();
		else quaylui(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>l;
		if(l == "O") m=0;
		else m=1;
		quaylui(1);
	}
}
