#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t, ans;
    ll n;
    scanf("%i", &t);
    while(t--) {
        ans = -1;
        scanf("%lld", &n);
        if(n % 2050 == 0) {
            ans = 0;
            n /= 2050;
            while(n) {
                ans += n % 10;
                n /= 10;
            }
        }
        printf("%i\n", ans);
    }
    return 0;
}
