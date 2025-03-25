#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	return a ? gcd(b % a, a) : b;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	while(cin >> n && n != 0){
		long long g = 0;
		for(int i = 1;i < n;++i){
			for(int j = i + 1;j <= n;++j){
				g += gcd(i, j);
			}
		}
		cout << g << '\n';
	}
}
