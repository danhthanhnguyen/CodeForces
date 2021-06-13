#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x, d, k = 0;
    char c;
    cin >> n >> x;
    while(n--) {
        cin >> c >> d;
        if(c == '+') {
            x += d;
        } else {
            if(x < d) {
                k++;
            } else {
                x -= d;
            }
        }
    }
    cout << x << " " << k;
    return 0;
}
