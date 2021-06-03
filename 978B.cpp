#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    bool check = false;
    for(int i = 0; i < n; i++) {
        if(i + 2 <= n - 1) {
            if(s[i] == 'x' && s[ i + 1] == 'x' && s[i + 2] == 'x') {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
