#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for(int i = 1;i <= n;++i){
		pair<int, int> a, b;
		int ans;
		cin >> a.first >> a.second >> b.first >> b.second;
		int afs = a.first + a.second, bfs = b.first + b.second;
		int pre_a = 0, pre_b = 0;
		for(int j = 1;j <= bfs;++j){
			if(j <= afs) pre_a += j;
			pre_b += j;
		}
		ans = pre_b - pre_a + (((b.first - b.second) + bfs) - ((a.first - a.second) + afs)) / 2;
		cout << "Case " << i << ": " << ans << '\n';
	}
}
