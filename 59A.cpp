#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	fflush(stdin);
	int n, up, low;
	n = s.size();
	up = 0;
	low = 0;
	for(int i = 0; i < n; i++) {
		if(isupper(s[i])) {
			up++;
		} else {
			low++;
		}
	}
	if(up > low) {
		for(int i = 0; i < n; i++) {
			putchar(toupper(s[i]));
		}
	} else {
		for(int i = 0; i < n; i++) {
			putchar(tolower(s[i]));
		}
	}
	return 0;
}
