#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m = 0;
    cin >> n;
    while(n--){
        m++;
        int a, b;
        cin >> a >> b;
        if(a % 2 == 0) a++;
        if(b % 2 == 0) b--;
        int ans;
        ans = ((a + b) * ((b - a) / 2 + 1)) / 2;
        cout << "Case " << m << ": " << ans << '\n';
    }
} 
