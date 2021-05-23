#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0, cubes = 1;
    cin >> n;
    while(n > 0 && n >= cubes) {
        ans++;
        n -= cubes;
        cubes += (ans + 1);
    }
    cout << ans;
    return 0;
}
