#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        ans += 5 * (i + 1);
        if(ans > 240 - k) {
            cout << i;
            break;
        }
        if(i == n - 1) {
            cout << i + 1;
        }
    }
    return 0;
}
