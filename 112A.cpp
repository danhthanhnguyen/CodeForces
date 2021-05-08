#include<bits/stdc++.h>
using namespace std;

int main() {
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	fflush(stdin);
	string upper1 = "";
	string upper2 = "";
	for(int i = 0; i < str1.size(); i++) {
		upper1 += toupper(str1[i]);
	}
	for(int i = 0; i < str2.size(); i++) {
		upper2 += toupper(str2[i]);
	}
	if(upper1.compare(upper2) > 0) {
		cout << 1;
	} else {
		if(upper1.compare(upper2) < 0) {
			cout << -1;
		} else {
			cout << 0;
		}
	}
	return 0;
}
