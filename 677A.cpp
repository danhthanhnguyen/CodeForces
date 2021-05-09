#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, h, height;
	cin >> n >> h;
	int ans = 0;
	while(n--) {
		cin >> height;
		if(height > h) {
			ans += 2;
		} else {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
