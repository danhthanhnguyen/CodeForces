#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 1;
	string check = "";
	string magnets;
	cin.ignore();
	while(n--) {
		cin >> magnets;
		if(check != "" && check[1] == magnets[0]) {
			ans++;
		}
		check = magnets;
	}
	cout << ans;
	return 0;
}
