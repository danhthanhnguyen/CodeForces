#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t, n, a;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld", &n);
		ll max = -1000000000;
		ll sum = 0;
		for(int i = 0; i < n; ++i) {
			scanf("%lld", &a);
			if(max < a) {
				max = a;
			}
			sum += a;
		}
		cout << std::setprecision(9) << std::fixed;
		cout << max + (sum - max) * 1.0 / (n - 1) << "\n";
	}
	return 0;
}