#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		deque<int> q;
		cin>>n;
		string s;
		while(n--){
			cin>>s;
			int x;
			if(s == "PUSHFRONT"){
				cin>>x;
				q.push_front(x);
			}
			if(s == "PRINTFRONT" ){
				if(q.empty()) cout<<"NONE"<<endl;
				else
				cout<<q.front();
				}
			if(s == "POPFRONT"){
				if(!q.empty()){
					q.pop_front();
				}
			}
			if(s== "PUSHBACK"){
				cin>>x;
				q.push_back(x);
			}
			if(s== "PRINTBACK"){
				if(q.empty()) cout<<"NONE"<<endl;
				else cout<<q.back()<<endl;;
			}
			if(s== "POPBACK"){
				if(!q.empty()){
					q.pop_back();
				}
			}
		}
	}

