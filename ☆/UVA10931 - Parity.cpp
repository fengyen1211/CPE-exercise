#include<bits/stdc++.h>
using namespace std;
pair<string, int> tobinary(long long n){
    pair<string, int> p = {"", 0};
    while(n > 0){
        if(n % 2 == 1){
            p.first = "1" + p.first;
            p.second++;
        }
        else p.first = "0" + p.first;
        n /= 2;
    }
    return p;
}
int main(){
    long long n;
    while(cin >> n && n != 0){
        pair<string, int> b = tobinary(n);
        cout << "The parity of " << b.first << " is " << b.second << " (mod 2)." << '\n';
    }
}