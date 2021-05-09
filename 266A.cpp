#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int ans = 0;
	string color;
	cin >> n;
	cin.ignore();
	getline(cin, color);
	for(int i = 0; i < n - 1; i++) {
		if(color[i] == color[i + 1]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
