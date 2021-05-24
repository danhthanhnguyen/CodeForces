#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, a, n, odd, even;
    cin >> t;
    while(t--) {
        cin >> n;
        odd = 0;
        even = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a % 2 != 0) {
                odd++;
            } else {
                even++;
            }
        }
        if(odd == 0 || (even == 0 && n % 2 == 0)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
