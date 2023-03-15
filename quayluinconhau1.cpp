#include<bits/stdc++.h>
using namespace std;
int n,a[10],b[10] ={0},xuoi[21],nguoc[21],dem;
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	}
void quaylui(int i){
	for(int j=1;j<=n;j++){
		if(!b[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
			a[i] = j;b[j] = 1;
			xuoi[i-j+n] =1;nguoc[i+j-1] = 1;
			if(i == n) dem++;
			else quaylui(i+1);
			b[j] = 0;	xuoi[i-j+n] = 0;nguoc[i+j-1]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<=10;i++){
			a[i]=0;b[i]	=0;		}
				for(int i=0;i<=10;i++){
			xuoi[i]=0;nguoc[i]	=0;		}
			dem=0;
		quaylui(1);
		cout<<dem<<endl;
		}
}

