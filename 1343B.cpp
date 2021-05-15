#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n % 4 != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            for(int i = 1; i <= n / 2; i++) {
                // print even
                cout << 2 * i << " ";
            }
            for(int i = 1; i < n / 2; i++) {
                // print odd
                cout << 2 * i - 1 << " ";
            }
            cout << n + (n / 2 - 1) << endl;
        }
    }
    return 0;
}
