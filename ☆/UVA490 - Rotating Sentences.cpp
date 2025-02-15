#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	vector<string> v;
	int t = 0;
	while(getline(cin, s)){
		v.push_back(s);
		if(s.size() > t) t = s.size();
	}
	for(int i = 0;i < v.size();++i){
		if(v[i].size() < t){
			string n(t - v[i].size(), ' ');
			v[i] += n;
		}
	}
	for(int i = 0;i < t;++i){
		for(int j = v.size() - 1;j >= 0;--j){
			cout << v[j][i];
		}
		cout << '\n';
	}
}
