#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    int t = 0;
    while(cin >> n){
        ++t;
        unordered_set<int> a;
        vector<int> b(n);
        bool flag = 0;
        for(int i = 0;i < n;++i){
            cin >> b[i];
            if((i > 0 && b[i] <= b[i - 1]) || b[i] < 1) flag = 1;
        }
        if(!flag){
        	for(int i = 0;i < n && !flag;++i){
            	for(int j = i; j < n;++j){
                	if(a.count(b[i] + b[j])){
                    	flag = 1;
                    	break;
                	}
                	a.insert(b[i] + b[j]);
            	}
        	}
		}
        if(flag) cout << "Case #" << t << ": " << "It is not a B2-Sequence." << '\n';
        else cout << "Case #" << t << ": " << "It is a B2-Sequence." << '\n';
        cout << '\n';
    }
} 