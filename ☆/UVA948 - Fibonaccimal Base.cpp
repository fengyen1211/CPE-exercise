#include<bits/stdc++.h>
using namespace std;
vector<unsigned long long> fibon(){
    vector<unsigned long long> a = {1, 2};
    unsigned long long n = 0;
    while(n < 100000000){
        n = a[a.size() - 1] + a[a.size() - 2];
        a.push_back(n);
    }
    return a;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    vector<unsigned long long> a = fibon();
    int n;
    cin >> n;
    while(n--){
        long long m, t;
        cin >> m;
        t = m;
        bool flag =0;
        string s = "";
        for(auto it = a.rbegin(); it != a.rend();++it){
            if(*it > m){
                if(flag) s += "0";
            }
            else{
                flag = 1;
                s += "1";
                m -= *it;
            }
        }
        cout << t << " = " << s << " (fib)" << '\n';
    }
}