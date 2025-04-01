#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	while(cin >> n){
		vector<int> a(n);
		int minA, possA = 0, diffA;
		for(int i = 0;i < n;++i) cin >> a[i];
		sort(a.begin(), a.end());
		if(n % 2 == 1){
			int l = a[n / 2];
			minA = a[n / 2];
			possA = count(a.begin(), a.end(), l);
			diffA = 1;
		}
		else{
			int l = a[n / 2 - 1], r = a[n / 2];
			minA = a[n / 2 - 1];
			if(l == r) possA = count(a.begin(), a.end(), l);
			else possA = count(a.begin(), a.end(), l) + count(a.begin(), a.end(), r);
			diffA = a[n / 2] - a[n / 2 - 1] + 1;
		}
		cout << minA << ' ' << possA << ' ' << diffA << '\n';
	}
}
