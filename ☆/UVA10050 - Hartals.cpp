#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int d, p;
        cin >> d >> p;
        vector<bool> hi(d + 5, 0);
        int h = 0;
        while(p--){
            int a;
            cin >> a;
            int t = a;
            while(t <= d){
                if(!hi[t] && t % 7 != 6 && t % 7 != 0) h++;
                hi[t] = 1;
                t += a;
            }
        }
        cout << h << '\n';
    }
} 