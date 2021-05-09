#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, max;
	cin >> n;
	int capacity = 0;
	max = capacity;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		capacity = capacity - a + b;
		if(capacity > max) {
			max = capacity;
		}
	}
	cout << max;
	return 0;
}
