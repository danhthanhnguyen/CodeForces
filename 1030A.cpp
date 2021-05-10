#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int status;
	bool ans = true;
	while(n--) {
		cin >> status;
		if(status == 1) {
			ans = false;
		}
	}
	if(ans) {
		cout << "EASY";
	} else {
		cout << "HARD";
	}
	return 0;
}
