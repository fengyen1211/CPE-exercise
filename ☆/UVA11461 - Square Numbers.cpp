#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b;
    while(cin >> a >> b){
        if(!a && !b) break;
        int l = ceil(sqrt(a));
        int r = floor(sqrt(b));
        int ans = r - l + 1;
        cout << ans << '\n';
    }
}