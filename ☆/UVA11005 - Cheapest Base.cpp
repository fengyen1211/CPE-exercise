#include<bits/stdc++.h>
using namespace std;
string to_other_base(int num, int base){
	if(num == 0) return "0";
	string ans = "";
	string bb = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(num > 0){
		ans = bb[num % base] + ans;
		num /= base;
	}
	return ans;
}
int ink_used(string n, unordered_map<char, int>& value){
	int ans = 0;
	for(auto c : n) ans += value[c];
	return ans;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	int kase = 0;
	cin >> n;
	while(n--){
		kase++;
		unordered_map<char, int> value;
		string bb = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		for(int i = 0;i < 36;i++){
			int m;
			cin >> m;
			value[bb[i]] = m;
		}
		cout << "Case " << kase << ':' << '\n';
		int a;
		cin >> a;
		while(a--){
			int cink = INT_MAX;
			vector<int> cbase;
			int num;
			cin >> num;
			for(int i = 2;i <= 36;++i){
				string m = to_other_base(num, i);
				int iu = ink_used(m, value);
				if(iu < cink){
					cink = iu;
					cbase = {i};
				}
				else if(iu == cink) cbase.push_back(i);
			}
			cout << "Cheapest base(s) for number " << num << ":";
			for(const auto& c : cbase) cout << ' ' << c;
			cout << '\n';
		}
		if(n > 0) cout << '\n';
	}
}
