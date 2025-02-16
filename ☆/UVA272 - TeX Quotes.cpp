#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	bool a = 1;
	while(getline(cin, s)){
		for(int i = 0;i < s.size();++i){
			if(s[i] == '"'){
				if(a) cout << "``";
				else cout << "\'\'";
				a = !a;
			}
			else cout << s[i];
		}
		cout << '\n';
	}
}
