#include<bits/stdc++.h>
using namespace std;
int ok=0,n,u=1,index=0; 
int b[30] = {0};
void soptu(){
	u=pow(n,2);
	}
void in(){
	for(int i=1;i<=n;i++){
		cout<<char(b[i] + 'A');
	
		}
	if(index<u-1){
		cout<<",";
	}
		index++;
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
	soptu();
	while(!ok){
		in();
		sinh();
		}
		cout<<endl;
		memset(b,0,sizeof(b));
		ok=0;
		index=0;u=0;
	}
	}
