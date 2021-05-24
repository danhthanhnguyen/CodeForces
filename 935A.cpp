#include<bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
