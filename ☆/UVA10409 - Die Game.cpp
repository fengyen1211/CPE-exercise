#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	while(cin >> n){
		if(n == 0) break;
		int up = 2;
		int left = 3;
		int top = 1;
		for(int i = 0;i < n;++i){
			string m;
			cin >> m;
			int t = top;
			if(m == "north"){
				top = 7 - up;
				up = t;
			}
			else if(m == "east"){
				top = left;
				left = 7 - t;
			}
			else if(m == "south"){
				top = up;
				up = 7 - t;
			}
			else if(m == "west"){
				top = 7 - left;
				left = t;
			}
		}
		cout << top << '\n';
	}
}
