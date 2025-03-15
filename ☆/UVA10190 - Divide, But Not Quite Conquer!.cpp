#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long n, m;
	while(cin >> n >> m){
		if(n == 1 || n == 0 || m == 0 || m == 1){
			cout << "Boring!" << '\n';
			continue;
		}
		vector<long long> a = {n};
		while(!(n % m)){
			a.push_back(n / m);
			n /= m;
		}
		if(a.back() != 1) cout << "Boring!" << '\n';
		else{
			cout << a[0];
			for(int i = 1;i < a.size();++i) cout << ' ' << a[i];
			cout << '\n';
		}
	}
}
