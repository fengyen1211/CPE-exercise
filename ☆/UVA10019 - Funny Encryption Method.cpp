#include<bits/stdc++.h>
using namespace std;
int count_decimal(int n){
	int result = 0;
	while(n > 0){
		if(n % 2 == 1) result += 1;
		n /= 2;
	}
	return result;
}
int count_hexadecimal(string n){
	int result = 0;
	for(auto num : n){
		int rnum = num - '0';
		while(rnum > 0){
			if(rnum % 2 == 1) result += 1;
			rnum /= 2;
		}
	}
	return result;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	while(n--){
		int t;
		cin >> t;
		cout << count_decimal(t) << ' ' << count_hexadecimal(to_string(t)) << '\n';
	}
}
