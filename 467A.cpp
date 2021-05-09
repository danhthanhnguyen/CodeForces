#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int room[n][2];
	int ans = n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 2; j++) {
			cin >> room[i][j];
			if(j == 1 && (room[i][0] == room[i][1] || room[i][1] - room[i][0] < 2)) {// full
				ans--;
			}
		}
	}
	cout << ans;
	return 0;
}
