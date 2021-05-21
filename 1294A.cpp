#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long a, b, c, n, s = 0;
    while(t--) {
        cin >> a >> b >> c >> n;
        s = a + b + c + n;
        if(s % 3 == 0 && abs(s / 3 - a) + abs(s / 3 - b) + abs(s / 3 - c) == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
