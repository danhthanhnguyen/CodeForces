#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, k, num;
	scanf("%i", &t);
	while(t--) {
		scanf("%i", &k);
		num = 1;
		vector<int> ans;
		while(ans.size() < k) {
			if(num % 3 != 0 && num % 10 != 3) {
				ans.push_back(num);
			}
			num++;
		}
		printf("%i\n", ans[k - 1]);
	}
	return 0;
}