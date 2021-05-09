#include<bits/stdc++.h>
using namespace std;

int main() {
	int k, n, w;
	cin >> k >> n >> w;
	int cost = k;
	for(int i = 1; i < w; i++) {
		cost += (k * (i + 1));
	}
	if(n >= cost) {
		cout << 0;
	} else {
		cout << cost - n;
	}
	return 0;
}
