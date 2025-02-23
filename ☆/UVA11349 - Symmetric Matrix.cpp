#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b = 0;
    cin >> a;
    while(a--){
        b++;
        string s, line;
        cin.ignore();
        getline(cin, s);
        stringstream ss(s);
        ss >> line;
        ss >> line;
        int n;
        ss >> n;
        vector<long long> m(n * n);
        bool flag = 0;
        int t;
        if(n % 2 == 1) t = (n * n - 1) / 2;
        else t = n * n / 2;
        for(int i = 0;i < n * n;++i){
            cin >> m[i];
            if(m[i] < 0) flag = 1;
            if(i >= t){
                if(m[i] != m[n * n - 1 - i]) flag = 1;
            }
        }
        cout << "Test #" << b << ": ";
        if(flag) cout << "Non-symmetric." << '\n';
        else cout << "Symmetric." << '\n';
    }
} 