#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, ans;
	ans = 0;
	cin >> n >> k;
	int point[n];
	for(int i = 0; i < n; i++) {
		cin >> point[i];
	}
	for(int i = 0; i < n; i++) {
		if(point[i] >= point[k - 1] && point[i] > 0) {
			ans++;
		}
	}
	cout << ans;

	return 0;
}
