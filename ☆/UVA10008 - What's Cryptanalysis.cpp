#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<char, int> &a, const pair<char, int> &b){
	return a.second > b.second;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	while(cin >> n){
		cin.ignore();
		map<char, int> alp;
		for(int i = 0;i < n;++i){
			string line;
			getline(cin, line);
			for(int j = 0;j < line.size();++j){
				if(int(line[j]) >= 65 && int(line[j]) <= 90) alp[line[j]]++;
				else if(int(line[j]) >= 97 && int(line[j] <= 122)) alp[char(int(line[j]) - 32)]++;
			}
		}
		vector<pair<char, int> > vec(alp.begin(), alp.end());
		sort(vec.begin(), vec.end(), cmp);
		for(vector<pair<char, int> >::iterator it = vec.begin();it != vec.end();++it) cout << it->first << ' ' << it->second << '\n';
	}
}

