#include<bits/stdc++.h>
using namespace std;
int nines_str(string s){
	int sum = 0;
	for(auto n : s){
		sum += n - '0';
	}
	return sum;
}
int nines_int(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	while(cin >> s && s != "0"){
		int degree = 1;
		int n = nines_str(s);
		if(n % 9 == 0){
			while(n > 9){
				n = nines_int(n);
				degree++;
			}
			cout << s << " is a multiple of 9 and has 9-degree " << degree << ".\n";
		}
		else cout << s << " is not a multiple of 9." << '\n';
	}
}
