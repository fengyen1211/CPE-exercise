#include<bits/stdc++.h>
using namespace std;
void process(const string &s){
	map<char, int> freq;
	for(char c : s){
		if(c >= 32 || c <= 127){
			freq[c]++;
		}
	}
	vector<pair<int, char>> sorted_freq;
	for(const auto &entry : freq){
		sorted_freq.emplace_back(entry.second, entry.first);
	}
	sort(sorted_freq.begin(), sorted_freq.end(), [](const pair<int, char> &a, const pair<int, char> &b){
		return (a.first == b.first) ? (a.second > b.second) : (a.first > b.first);
	});
	for(const auto &entry : sorted_freq){
		cout << (int)entry.second << ' ' << entry.first << '\n';
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	bool isfirst = true;
	while(getline(cin, s)){
		if(!isfirst) cout << '\n';
		process(s);
	}
}
