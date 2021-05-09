#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, a, d;
	string winner;
	a = 0;
	d = 0;
	cin >> n;
	cin.ignore();
	getline(cin, winner);
	for(int i = 0; i < n; i++) {
		if(winner[i] == 'A') {
			a++;
		}
		if(winner[i] == 'D') {
			d++;
		}
	}
	if(a > d) {
		cout << "Anton";
	} else {
		if(a < d) {
			cout << "Danik";
		} else {
			cout << "Friendship";
		}
	}
	return 0;
}
