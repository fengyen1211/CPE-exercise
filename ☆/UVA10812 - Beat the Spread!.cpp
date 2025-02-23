#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        if(a < b || (a + b) % 2 != 0){
            cout << "impossible" << '\n';
            continue;
        }
        cout << (a + b) / 2 << ' ' << (a - b) / 2 << '\n';
    }
} 