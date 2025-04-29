#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	while(n--){
		int l;
		cin >> l;
		vector<int> c(l);
		for(int i = 0;i < l;++i) cin >> c[i];
		int cnt = 0;
		for(int i = l;i > 0;--i){
			for(int j = 0;j < i - 1;++j){
				if(c[j] > c[j + 1]){
					swap(c[j], c[j + 1]);
					cnt++;
				}
			}
		}
		cout << "Optimal train swapping takes " << cnt << " swaps." << '\n';
	}
}
