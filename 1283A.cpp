#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, h, m;
    cin >> t;
    while(t--) {
        cin >> h >> m;
        cout << abs(h - 24) * 60 - m << endl;
    }
    return 0;
}
