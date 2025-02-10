#include<bits/stdc++.h>
using namespace std;
void bgl(long long n){
	if(n >= 10000000){
		bgl(n / 10000000);
		cout << " kuti";
		n %= 10000000;
	}
	if(n >= 100000){
		bgl(n / 100000);
		cout << " lakh";
		n %= 100000;
	}
	if(n >= 1000){
		bgl(n / 1000);
		cout << " hajar";
		n %= 1000;
	}
	if(n >= 100){
		bgl(n / 100);
		cout << " shata";
		n %= 100;
	}
	if(n){
		cout << " " << n;
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int case_ = 0;
	long long a;
	while(cin >> a){
		case_++;
		cout << setw(4) << case_ << ".";
		if(a) bgl(a);
		else cout << " 0";
		cout << '\n';
	}
	return 0;
}
