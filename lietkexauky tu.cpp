#include <bits/stdc++.h>
using namespace std;

char n;
int k;
char c = 'A';
void Try(int i, string s = "")
{
    if(i == k)
    {
        cout << s << endl;
        return;
    }
    for(char j = c; j <= n; ++j) Try(i + 1, s + j);
}

int main(){
	cin>>n>>k;
	Try(0);
}
