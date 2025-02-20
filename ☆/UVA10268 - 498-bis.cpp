#include<bits/stdc++.h>
using namespace std;
long long fast_pow(long long a, long long b){
	long long result = 1;
	while(b > 0){
		if(b % 2 == 1) result *= a;
		a *= a;
		b /= 2;
	}
	return result;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long a;
	while(cin >> a){
		cin.ignore();
		string s;
		getline(cin, s);
		stringstream ss(s);
		long long n;
		vector<long long> v;
		while(ss >> n) {
			v.push_back(n);
		}
		long long ans = 0;
		for(int i = 0;i < v.size() - 1;++i){
			ans += v[i] * (v.size() - i - 1) * fast_pow(a, v.size() - i - 2);
		}
		cout << ans << '\n';
	}
}
