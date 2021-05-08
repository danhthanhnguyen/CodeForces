#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string cmd;
	int x = 0;
	while(n--) {
		cin >> cmd;
		if(cmd.find("++") != -1) {
			x++;
		}
		if(cmd.find("--") != -1) {
			x--;
		}
	}
	cout << x;
	return 0;
}
