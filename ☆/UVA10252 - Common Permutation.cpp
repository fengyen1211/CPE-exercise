#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string a, b;
	while(cin >> a >> b){
		vector<pair<int, int> > vec(26, {0, 0});
		for(int i = 0;i < a.size();++i) vec[a[i] - 'a'].first++;
		for(int j = 0;j < b.size();++j) vec[b[j] - 'a'].second++;
		for(int k = 0;k < 26;++k){
			if(vec[k].first && vec[k].second){
				for(int l = 0;l < min(vec[k].first, vec[k].second);++l) cout << char(k + 97);
			}
		}
		cout << '\n';
	}
}

