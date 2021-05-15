#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long x, y, n;
    while(t--) {
        cin >> x >> y >> n;
        if(n / x == 0) {
            cout << y << endl;
        } else if(n % x == 0) {
            if(y != 0) {
                cout << (n / x) * x - (x - y) << endl;
            } else {
                cout << n << endl;
            }
        } else {
            if((n / x) * x + y > n) {
                cout << (n / x) * x - (x - y) << endl;
            } else {
                cout << (n / x) * x + y << endl;
            }
        }
    }
    return 0;
}
