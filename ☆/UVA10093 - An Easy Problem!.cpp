#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string c;
    while(getline(cin, c)){
    	long long t = 0, m = 1, num = 0;
        for(auto i : c){
        	if(isdigit(i)) t = i - '0';
        	else if(isupper(i)) t = i - 'A' + 10;
        	else if(islower(i)) t = i - 'a' + 36;
        	else continue;
        	if(t > m) m = t;
        	num += t;
		}
		bool poss = 0;
		for(int i = m + 1;i <= 62;++i){
			if(num % (i - 1) == 0){
				cout << i << '\n';
				poss = 1;
				break;
			}
		}
		if(!poss) cout << "such number is impossible!" << '\n';
    }
}