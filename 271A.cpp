#include<bits/stdc++.h>
using namespace std;

int main() {
	int x, y, z[4], i;
	cin >> y;
	y++;
	while(1) {
		i = 0;
		x = y;
		while(i < 4) {
			z[i] = x % 10;
			x /= 10;
			i++;
		}
		if(z[0] == z[1] || z[0] == z[2] || z[0] == z[3] || z[1] == z[2] || z[1] == z[3] || z[2] == z[3]) {
			y++;
		} else {
			break;
		}
	}
	cout << y;
	return 0;
}
