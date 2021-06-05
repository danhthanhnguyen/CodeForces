#include<bits/stdc++.h>
using namespace std;

int main() {
    long long k2, k3, k5, k6, ans = 0, temp = 0;
    cin >> k2 >> k3 >> k5 >> k6;
    if(k2 == 0) {
        cout << ans;
        return 0;
    } else if(k5 != 0 && k6 != 0) {
        temp = min(k5, k6);
        temp = min(k2, temp);
        ans += temp * 256;
        k2 -= temp;
        if(k2 != 0) {
            temp = min(k2, k3);
            ans += temp * 32;
        }
    } else {
        temp = min(k2, k3);
        ans += temp * 32;
    }
    cout << ans;
    return 0;
}
