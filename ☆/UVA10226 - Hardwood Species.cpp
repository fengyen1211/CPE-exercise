#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	getline(cin, s);
	while(n--){
		map<string, int> trees;
		int cnt = 0;
		while(getline(cin, s) && s != ""){
			trees[s]++;
			cnt++;
		}
		for(const auto& p : trees){
			double percentage = (static_cast<double>(p.second) / cnt) * 100;
			cout << p.first << ' ' << fixed << setprecision(4) << percentage << '\n';
		}
		if(n) cout << '\n';
	}
}
