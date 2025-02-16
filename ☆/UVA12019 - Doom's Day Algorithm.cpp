#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	vector<int> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<string> day = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int n;
	cin >> n;
	for(int i = 0;i < n;++i){
		int mm, dd;
		cin >> mm >> dd;
		int total_days = 0;
		if(mm != 1){
			for(int j = 0;j < mm - 1;++j) total_days += days_in_month[j];
		}
		total_days += dd;
		if(mm == 1 && dd == 1) cout << "Saturday" << '\n';
		else if(mm == 1 && dd == 2) cout << "Sunday" << '\n';
		else cout << day[(total_days - 3) % 7] << '\n';
	}
}