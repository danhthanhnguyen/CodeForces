#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    bool win = true;
    while(n > 0) {
        if(__gcd(a, n) > n) {
            win = true;
            break;
        } else {
            n -= __gcd(a, n);
        }
        if(__gcd(b, n) > n) {
            win = false;
            break;
        } else {
            n -= __gcd(b, n);
        }
    }
    if(win) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}
