#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int present, ans[n];
	int i = 1;
	while(n--) {
		cin >> present;
		ans[present - 1] = i;
		i++;
	}
	for(auto x : ans) {
		cout << x << " ";
	}
	return 0;
}
