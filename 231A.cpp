#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string ans;
	int result = 0;
	cin.ignore();
	while(n--) {
		getline(cin, ans);
		if((ans[0] == '1' && ans[2] == '1') || (ans[2] == '1' && ans[4] == '1') || (ans[0] == '1' && ans[4] == '1') || (ans[0] == '1' && ans[2] == '1' && ans[4] == '1')) {
			result++;
		}
	}
	cout << result;
	return 0;
}
