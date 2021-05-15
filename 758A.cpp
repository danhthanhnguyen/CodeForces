#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    sort(a, a+ n);
    for(int i = 0; i < n - 1; i++) {
        ans += a[n - 1] - a[i];
    }
    cout << ans;
    return 0;
}
