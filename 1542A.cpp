#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, a, n, odd;
    cin >> t;
    while(t--) {
        cin >> n;
        odd = 0;
        for(int i = 0; i < 2 * n; i++) {
            cin >> a;
            if(a % 2 != 0) {
                odd++;
            }
        }
        if(n == odd) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
