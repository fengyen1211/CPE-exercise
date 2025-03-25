#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int m, n, q;
		cin >> m >> n >> q;
		char rt[m][n];
		for(int i = 0;i < m;++i){
			for(int j = 0;j < n;++j){
				cin >> rt[i][j];
			}
		}
		cout << m << ' ' << n << ' ' << q << '\n';
		while(q--){
			int r, c;
			cin >> r >> c;
			int ans = 1, i = 1;
			bool canbigger = true;
			while(canbigger){
				if(r - i < 0 || r + i >= m || c - i < 0 || c + i >= n) break;
				for(int j = r - i;j <= r + i && canbigger;++j){
					for(int k = c - i;k <= c + i;++k){
						if(rt[j][k] != rt[r][c]) canbigger = false;
					}
				}
				i++;
				if(canbigger) ans += 2;
			}
			cout << ans << '\n';
		}
	}
}
