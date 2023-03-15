#include<bits/stdc++.h>
using namespace std;
int n,C[10][10],A[10],maxx;
int cot[20]={0};
int Xuoi[20]={0};
int Nguoc[20]={0};


void check()
{
    int sum=0;
    for(int i=1;i<=8;i++)
    sum+=C[i][A[i]];
    if(sum>maxx) maxx = sum;
}
void TRY(int i)
{
    for(int j=1;j<=8;j++)
    {
        if(!cot[j] && !Xuoi[i-j+8] && !Nguoc[i+j-1])
        {
            A[i]=j;
            cot[j]=1;
            Xuoi[i-j+8]=1;
            Nguoc[i+j-1]=1;
            if(i==8) check();
            else TRY(i+1);
            cot[j]=0;
            Xuoi[i-j+8]=0;
            Nguoc[i+j-1]=0;
        }
    }
}

int main()
{
    int t; cin>>t;
	int x=1;
    while(t--){
    maxx=0;
    for(int i=1;i<=8;i++)
    for(int j=1;j<=8;j++) cin>>C[i][j];
    TRY(1);
    cout<<"Test "<<x<<":"<<maxx<<endl;
    x++;
	}
}

