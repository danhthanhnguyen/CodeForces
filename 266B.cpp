#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	string queue;
	cin.ignore();
	getline(cin, queue);
	for(int i = 0; i < t; i++) {
		int j = 0;
		while(j < n - 1) {
			if(queue[j] == 'B' && queue[j + 1] == 'G') {
				queue[j] = 'G';
				queue[j + 1] = 'B';
				j += 2;
			} else {
				j += 1;
			}
		}
	}
	cout << queue;
	return 0;
}
