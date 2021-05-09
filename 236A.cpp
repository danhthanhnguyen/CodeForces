#include<bits/stdc++.h>
using namespace std;

int main() {
	string name;
	getline(cin, name);
	fflush(stdin);
	int n = name.size();
	int ans = n;
	// sort string of characters
	sort(name.begin(), name.end());
	for(int i = 0; i < n - 1; i++) {
		if(name[i] == name[i + 1]) {
			ans--;
		}
	}
	if(ans % 2 == 0) {
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}
	return 0;
}
