#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    ll x, y, a, b;
    while(t--) {
        cin >> x >> y >> a >> b;
        if((y - x) % ( a + b)) {
            cout << -1 << endl;
        } else {
            cout << (y - x) / (a + b) << endl;
        }
    }
    return 0;
}
