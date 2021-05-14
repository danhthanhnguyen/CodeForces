#include<bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    int police = 0, crimes, ans = 0, a;
    while(n--) {
        cin >> a;
        if(a == -1) {
            if(police > 0) {
                police += a;
            } else {
                ans++;
            }
        } else {
            police += a;
        }
    }
    cout << ans;
    return 0;
}
