#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, y, ans = 0;
    cin >> n >> k;
    while(n--) {
        cin >> y;
        if(y + k <= 5) {
            ans++;
        }
    }
    cout << ans / 3;
    return 0;
}
