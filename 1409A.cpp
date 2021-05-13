#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long a, b, ans;
    while(t--) {
        cin >> a >> b;
        int i = 10;
        ans = 0;
        while(a != b) {
            if(abs(a - b) / i > 0) {
                ans += abs(a - b) / i;
                if(a > b) {
                    b += ((a - b) / i) * i;
                } else {
                    a += ((b - a) / i) * i;
                }
            }
            i--;
        }
        cout << ans << endl;
    }
    return 0;
}
