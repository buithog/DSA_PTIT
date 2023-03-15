#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[20];
		scanf("%s",&s);
		int ok =1;
		if((s[strlen(s) -1 ]-'0') %2 != 0){
			ok=0;
		}
		int dem=0;
		for(int i=0;i<strlen(s);i++){
			if((s[strlen(s) -1 ]-'0') %2 == 0) dem++;
		}
		if(dem<strlen(s)-dem) ok=0;
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
}
