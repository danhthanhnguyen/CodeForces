#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long r, b, d;
    while(t--) {
        cin >> r >> b >> d;
        if(((long long)ceil(max(r, b) * 1.0 / min(r, b)) - 1 <= d && min(r, b) > 1) || (r == b) || (max(r, b) - 1 <= d)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
