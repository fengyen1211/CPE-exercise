#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	while(cin >> n){
		cin.ignore();
		string country, line;
		map<string, int> lst;
		for(int i = 0;i < n;++i){
			getline(cin, line);
			stringstream ss(line);
			ss >> country;
			lst[country]++;
		}
		for(map<string, int>::iterator it = lst.begin();it != lst.end();++it) cout << it->first << ' ' << it->second << '\n';
	}
}

