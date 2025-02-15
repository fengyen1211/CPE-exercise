#include<bits/stdc++.h>
using namespace std;
long long ff(long long n){
	if(n >= 10){
		long long sum = 0;
		while(n){
			sum += n % 10;
			n /= 10;
		}
		return ff(sum);
	}
	else return n;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long n;
	while(cin >> n){
		if(n == 0) break;
		cout << ff(n) << '\n';
	}
}

