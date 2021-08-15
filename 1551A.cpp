#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << n - (long long)(2 * (round(n / 3.0))) << " " << (long long)round(n / 3.0) << endl;
    }
    return 0;
}
