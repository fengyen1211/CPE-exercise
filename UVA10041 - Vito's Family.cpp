#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while(a--){
        int r;
        cin >> r;
        vector<int> s(r);
        
        for(int i = 0; i < r; i++) cin >> s[i];

		if(r == 1){
			cout << 0 << '\n';
			continue;
		}
		
        sort(s.begin(), s.end());
		
        int ans = 0;
        for(int j = 0;j < r / 2;j++) ans += s[r - j - 1] - s[j];

        cout << ans << '\n';
    }

    return 0;
}

