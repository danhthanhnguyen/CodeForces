#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, s[4], win1, win2;
    cin >> t;
    while(t--) {
        for(int i = 0; i < 4; i++) {
            cin >> s[i];
        }
        win1 = max(s[0], s[1]);
        win2 = max(s[2], s[3]);
        sort(s, s + 4);
        if(min(win1, win2) == s[2]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
