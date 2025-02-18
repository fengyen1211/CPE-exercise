#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int s;
	cin >> s;
	while(s){
		int n, i;
		double p, ans;
		cin >> n >> p >> i;
		if(p == 1){
			if(i == 1){
				cout << "1.0000" << '\n';
				--s;
				continue;
			}
			else{
				cout << "0.0000" << '\n';
				--s;
				continue;
			}
		}
		ans = p * (pow(1 - p, i - 1) / (1 - pow(1 - p, n)));
		cout << fixed << setprecision(4) << ans << '\n';
		--s;
	}
}
