#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, m, n;
    cin >> t;
    while(t--) {
        cin >> m >> n;
        (m % n == 0) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
