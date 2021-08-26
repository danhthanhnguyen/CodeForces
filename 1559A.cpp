#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t, k;
	scanf("%i", &t);
	while(t--) {
		scanf("%i", &k);
		ll a[k];
		ll ans;
		for(int i = 0; i < k; ++i) {
			scanf("%lld", &a[i]);
			if(i == 0) {
				ans = a[0];
			} else {
				ans = ans & a[i];
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}