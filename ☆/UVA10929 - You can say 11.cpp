#include<bits/stdc++.h>
using namespace std;
int main(){
	//ios::sync_with_stdio(0); cin.tie(0);
	string n;
	while(cin >> n && n != "0"){
		unsigned long long a = 0, b = 0;
		for(int i = 0;i < n.size();i++){
			if(i % 2 == 0) a += n[i] - '0';
			else b += n[i] - '0';
		}
		unsigned long long bign = max(a, b), smalln = min(a, b);
		if((bign - smalln) % 11 == 0) cout << n << " is a multiple of 11." << '\n';
		else cout << n << " is not a multiple of 11." << '\n';
	}
}
