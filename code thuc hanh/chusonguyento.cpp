#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int n;
bool check1(string s){
	int cnt1=0,cnt2 =0,cnt3=0,cnt4=0;
	for(int i=0;i<s.size();i++){
		if(s[i] =='2') cnt1++;
		else if(s[i] == '3')cnt2++;
		else if(s[i] == '5') cnt3++;
		else if(s[i] == '7') cnt4++;
	}
	if(cnt1 == 0|| cnt2== 0||cnt3==0||cnt4==0) 
		return false;
	return true;
}
bool check2(string s){
	if(stoll(s)%2 == 0)
		return false;
	return true; 
}
bool check3(string s){
	for(int i=0;i<s.size();i++){
		if(s[i] !='2' && s[i]!='3' &&s[i] !='5'&& s[i] !='7')
		return false;
		return true;
	}
}
void xuly(){
	queue<string> q;
	q.push("2");
	q.push("3");
	q.push("5");
	q.push("7");
	while(1){
		string t =q.front();
		q.pop();
		if(t.size()>n) 
		break;
		if(check3(t) &&check1(t) && check2(t)) 
		v.push_back(t);
		q.push(t+"2");
		q.push(t+"3");
		q.push(t+"5");
		q.push(t+"7");
	}
}
int main(){
	cin>>n;
	xuly();
	for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
}
