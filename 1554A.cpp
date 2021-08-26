#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t, n, a, ans;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld", &n);
		ans = 0;
		vector<ll> v;
		for(int i = 0; i < n; ++i) {
			scanf("%lld", &a);
			v.push_back(a);
		}
		for(int i = 0; i < v.size() - 1; ++i) {
			if(ans < std::max(v[i], v[i + 1]) * std::min(v[i], v[i + 1])) {
				ans = std::max(v[i], v[i + 1]) * std::min(v[i], v[i + 1]);
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
