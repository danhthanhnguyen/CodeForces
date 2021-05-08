#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	fflush(stdin);
	int n = s.size();
	for(int i = 0; i < n; i++) {
		if(i == 0) {
			putchar(toupper(s[i]));
		} else {
			cout << s[i];
		}
	}
	return 0;
}
