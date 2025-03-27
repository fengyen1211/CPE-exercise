#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	pair<double, double> a, b, c, d, ans;
	while(cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second >> d.first >> d.second){
		if(a == c){
			ans.first = b.first + d.first - a.first;
			ans.second = b.second + d.second - a.second;
		}
		else if(a == d){
			ans.first = b.first + c.first - a.first;
			ans.second = b.second + c.second - a.second;
		}
		else if(b == c){
			ans.first = a.first + d.first - b.first;
			ans.second = a.second + d.second - b.second;
		}
		else if(b == d){
			ans.first = a.first + c.first - b.first;
			ans.second = a.second + c.second - b.second;
		}
		cout << fixed << setprecision(3) << ans.first << ' ' << ans.second << '\n';
	}
}
