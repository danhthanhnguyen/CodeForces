#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	fflush(stdin);
	int n = s.size();
	int i = 0;
	while(i < n - 1) {
		int j = 0;
		while(j < n - i - 1) {
			if(s[j] > s[j + 2]) {
				int temp = s[j];
				s[j] = s[j + 2];
				s[j + 2] = temp;
			}
			j += 2;
		}
		i += 2;
	}
	cout << s;
	return 0;
}
