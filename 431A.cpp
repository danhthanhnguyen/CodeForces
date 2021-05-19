#include<bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    int a[4];
    for(int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    cin.ignore();
    string s;
    getline(cin, s);
    for(int i = 0; i < 4; i++) {
        for(auto x : s) {
            if(x -'0' == i + 1) {
                ans += a[i];
            }
        }
    }
    cout << ans;
    return 0;
}
