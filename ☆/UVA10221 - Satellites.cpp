#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int s, a;
	string d;
	double pi = M_PI;
	double degree;
	double arc, chord;
	while(cin >> s >> a >> d){
		if(a > 360) a = a % 360;
		if(a > 180) a = 360 - a;
		if(d == "deg") degree = pi * a / 180.0;
		else if(d == "min") degree = pi * a / (60 * 180);
		arc = (s + 6440) * degree;
		chord = (s + 6440) * sqrt(2 * (1 - cos(degree)));
		cout << fixed << setprecision(6) << arc << ' ' << fixed << setprecision(6) << chord << '\n';
	}
}
