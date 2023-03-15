#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c){
	return c == '+' || c == '-' || c == '/' || c == '*';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.length();
		stack<string> st;
		for(int i = 0; i <n; ++i){
			if(isOperator(s[i])) {
				string s1 = st.top(); st.pop();
				string s2 = st.top(); st.pop();
				string tmp = "("+s2+ s[i] + s1 +")";
				st.push(tmp);
			}
			else st.push(string(1, s[i]));
		}
		cout << st.top() << endl;
	}
	return 0;
 }

