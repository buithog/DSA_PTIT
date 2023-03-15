#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,z,t;
	cin>>x>>y>>z>>t;
	int a=abs(x-z);
	int b=abs(y-t);
	if(a==b) cout<<a;
	else cout<<min(a,b)+abs(a-b);
}
