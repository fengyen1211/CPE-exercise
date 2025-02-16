#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	while(cin >> n){
		vector<int> a;
		vector<bool> b(n, 0);
		int t;
		bool flag = 0;
		for(int i = 0;i < n;++i){
			cin >> t;
			a.push_back(t);
			if(i){
				if(abs(a[i] - a[i - 1]) >= n) flag = true;
				else b[abs(a[i] - a[i - 1])] = true;
			}
		}
		for(int i = 1;i < n;++i){
			if(!b[i]) flag = true;
		}
		if(flag) cout << "Not jolly" << '\n';
		else cout << "Jolly" << '\n';
	}
}