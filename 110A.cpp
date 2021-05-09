#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	int ans = 0;
	while(n != 0) {
		if(n % 10 == 4 || n % 10 == 7) {
			ans++;
		}
		n /= 10;
	}
	if(ans == 7 || ans == 4) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
