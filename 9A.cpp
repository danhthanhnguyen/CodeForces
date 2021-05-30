#include<bits/stdc++.h>
using namespace std;

int main() {
    int y, w, ans = 0;
    cin >> y >> w;
    for(int i = max(y, w); i <= 6; i++) {
        ans++;
    }
    cout << ans / __gcd(ans, 6) << "/" << 6 / __gcd(ans, 6);
    return 0;
}
