#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x, f;
    cin >> t;
    while(t--) {
        cin >> n >> x;
        if(n == 1 || n == 2) {
            cout << 1 << endl;
        } else {
            f = ceil((double)(n - 2) / x);
            cout << f + 1 << endl;
        }
    }
    return 0;
}
