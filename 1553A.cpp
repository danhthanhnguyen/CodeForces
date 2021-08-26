#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t, n;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld", &n);
		printf("%lld\n", n % 10 == 9 ? n / 10 + 1 : n / 10);
	}

	return 0;
}
