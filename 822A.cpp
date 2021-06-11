#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, ans = 1;
    cin >> a >> b;
    for(long long i = min(a, b); i >= 1; i--) {
        ans *= i;
    }
    cout << ans;
    return 0;
}
