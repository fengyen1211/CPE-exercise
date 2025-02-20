#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	unsigned long long s, d;
	while(cin >> s >> d){
		unsigned long long td = s;
		while(td < d){
			++s;
			td += s;
		}
		cout << s << '\n';
	}
}
