#include<bits/stdc++.h>
using namespace std;
int f(int a){
	int n = 0;
	while(true){
		n += 1;
		if(a == 1) return n;
		else if(a % 2 == 0) a = a / 2;
		else a = 3 * a + 1;
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int a, b;
	while(cin >> a >> b){
		int begin = min(a, b), end = max(a, b);
		int maxnum = 0;
		for(int i = a;i <= b;i++) maxnum = max(maxnum, f(i));
		cout << a << ' ' << b << ' ' << maxnum << '\n';
	}
}
