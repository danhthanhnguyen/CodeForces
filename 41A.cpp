#include<bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	getline(cin, s);
	getline(cin, t);
	fflush(stdin);
	bool check = true;
	int n = s.size();
	for(int i = 0; i < n; i++) {
		if(s[i] != t[n - i - 1]) {
			check = false;
		}
	}
	if(check) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
