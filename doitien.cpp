#include<stdio.h>
int main(){
	int a[10] ={1000,500,200,100,50,20,10,5,2,1};
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int dem=0;
		for(int i=0;i<=9;i++){
			int x = n/a[i];
			dem+= x;
			n = n-x*a[i];
		}
		printf("%d\n",dem);
	}
}
