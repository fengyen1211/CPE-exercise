#include<bits/stdc++.h>
using namespace std;
int f(long long n){
	int ans = 0;
	while(n){
		ans += n % 10;
		n /= 10;
	}
	if(ans >= 10) return f(ans);
	else return ans;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long n;
	while(cin >> n && n) cout << f(n) << '\n';
}
