#include<bits/stdc++.h>
using namespace std;
int used[1000000],n;
int a[30];
char c[]={'A','B','C','D','E','F','G','H'};
int check(){
	for(int i=1;i<n-2;i++){
		if(c[a[i]-1] != 'A' && c[a[i]+1] != 'A' &&c[a[i]-1] != 'E' &&c[a[i]+1] != 'E' )return 0;
	}
	return 1;
}
void in(){
	if(check()){  for(int i=1;i<=n;i++) cout<<c[a[i]-1];
					cout<<endl;
	}
	
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i] = j;
			used[j]=1;
			if(i == n) {in();}
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	
	char x ;
	int id=0;
	cin>>x;
	for(int i=0;i<8;i++){
		if(x == c[i]) n=i+1;
	}
	Try(1);

}

