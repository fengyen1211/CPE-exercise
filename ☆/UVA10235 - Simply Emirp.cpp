#include<bits/stdc++.h>
using namespace std;
vector<bool> is_prime(1000002, true);
vector<int> prime;
void sieve(){
	for(int i = 2;i <= 1000002;++i){
		if(is_prime[i]) prime.push_back(i);
		for(auto p : prime){
			if(i * p > 1000002) break;
			is_prime[i * p] = false;
			if(i % p == 0) break;
		}
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	sieve();
	int n;
	while(cin >> n){
		bool isprime = false;
		if(is_prime[n] == true) isprime = true;
		if(isprime){
			int revn = 0;
			int tens = 1;
			for(auto i : to_string(n)){
				revn += (i - '0') * tens;
				tens *= 10;
			}
			bool isemirp = false;
			if(n != revn){
				if(is_prime[revn] == true) isemirp = true;
			}
			if(isemirp) cout << n << " is emirp." << '\n';
			else cout << n << " is prime." << '\n';
		}
		else cout << n << " is not prime." << '\n';
	}
}
