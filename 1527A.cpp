#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n, ans, l;
    cin >> t;
    while(t--) {
        cin >> n;
        ans = 0;
        l = 0;
        while(n > ans) {
            l = ans;
            ans = 2 * ans + 1;
        }
        cout << l << endl;
    }
    return 0;
}
