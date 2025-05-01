#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n, m;
	int kase = 1;
	while(cin >> n >> m){
		int mine[n + 2][m + 2] = {0};
		if(n == 0 || m == 0) break;
		if(kase != 1) cout << '\n';
		char x;
		for(int i = 1;i <= n;++i){
			for(int j = 1;j <= m;++j){
				cin >> x;
				if(x == '*'){
					mine[i][j] = 9;
					mine[i - 1][j - 1]++;
					mine[i - 1][j]++;
					mine[i - 1][j + 1]++;
					mine[i][j - 1]++;
					mine[i][j + 1]++;
					mine[i + 1][j - 1]++;
					mine[i + 1][j]++;
					mine[i + 1][j + 1]++;
				}
			}
		}
		cout << "Field #" << kase++ << ":" << '\n';
		for(int i = 1;i <= n;++i){
			for(int j = 1;j <= m;++j){
				if(mine[i][j] >= 9) cout << '*';
				else cout << mine[i][j];
			}
			cout << '\n';
		}
	}
}
