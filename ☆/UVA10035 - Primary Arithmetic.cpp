#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string a, b;
	while(cin >> a >> b){
		if(a == "0" && b == "0") break;
		int cnt = 0, t = 0;
		if(a.size() > b.size()){
			string newb(a.size() - b.size(), '0');
			b = newb + b;
			for(int i = a.size() - 1;i >= 0;i--){
				 if((a[i] - '0') + (b[i] - '0') + t >= 10){
				 	cnt += 1; t = 1;
				 }
				 else t = 0;
			}
		}
		else{
			string newa(b.size() - a.size(), '0');
			a = newa + a;
			for(int i = a.size() - 1;i >= 0;i--){
				 if((a[i] - '0') + (b[i] - '0') + t >= 10){
				 	cnt += 1; t = 1;
				 }
				 else t = 0;
			}
		}
		if(cnt == 0) cout << "No carry operation." << '\n';
		else if(cnt == 1) cout << "1 carry operation." << '\n';
		else cout << cnt << ' ' << "carry operations." << '\n';
	}	
}
