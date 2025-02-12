#include<bits/stdc++.h>
using namespace std;
int main(){
	string line;
	while(getline(cin, line)){
		for(int i = 0;i < line.size();++i){
			if(line[i] == ']' || line[i] == '}') cout << 'p';
			else if(line[i] == '[' || line[i] == '{') cout << 'o';
			else if(line[i] == 'p' || line[i] == 'P') cout << 'i';
			else if(line[i] == 'o' || line[i] == 'O') cout << 'u';
			else if(line[i] == 'i' || line[i] == 'I') cout << 'y';
			else if(line[i] == 'u' || line[i] == 'U') cout << 't';
			else if(line[i] == 'y' || line[i] == 'Y') cout << 'r';
			else if(line[i] == 't' || line[i] == 'T') cout << 'e';
			else if(line[i] == 'r' || line[i] == 'R') cout << 'w';
			else if(line[i] == 'e' || line[i] == 'E') cout << 'q';
			else if(line[i] == '\'' || line[i] == '"') cout << 'l';
			else if(line[i] == ';' || line[i] == ':') cout << 'k';
			else if(line[i] == 'l' || line[i] == 'L') cout << 'j';
			else if(line[i] == 'k' || line[i] == 'K') cout << 'h';
			else if(line[i] == 'j' || line[i] == 'J') cout << 'g';
			else if(line[i] == 'h' || line[i] == 'H') cout << 'f';
			else if(line[i] == 'g' || line[i] == 'G') cout << 'd';
			else if(line[i] == 'f' || line[i] == 'F') cout << 's';
			else if(line[i] == 'd' || line[i] == 'D') cout << 'a';
			else if(line[i] == '.' || line[i] == '>') cout << 'm';
			else if(line[i] == ',' || line[i] == '<') cout << 'n';
			else if(line[i] == 'm' || line[i] == 'M') cout << 'b';
			else if(line[i] == 'n' || line[i] == 'N') cout << 'v';
			else if(line[i] == 'b' || line[i] == 'B') cout << 'c';
			else if(line[i] == 'v' || line[i] == 'V') cout << 'x';
			else if(line[i] == 'c' || line[i] == 'C') cout << 'z';
			else if(line[i] == ' ') cout << ' ';
		}
		cout << '\n';
	}
}

