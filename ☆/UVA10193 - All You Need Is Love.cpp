#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	return a ? gcd(b % a, a) : b;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	int kase = 0;
	while(n--){
		kase++;
		string a, b;
		cin >> a >> b;
		long long p = 0, q = 0;
		for(auto& c : a) p = (p << 1) + (c - '0');
		for(auto& c : b) q = (q << 1) + (c - '0');
		if(gcd(p, q) != 1) cout << "Pair #" << kase << ": All you need is love!" << '\n';
		else cout << "Pair #" << kase << ": Love is not all you need!" << '\n';
	}
}
