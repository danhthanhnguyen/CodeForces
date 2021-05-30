#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    cin.ignore();
    string current, target;
    getline(cin, current);
    getline(cin, target);
    for(int i = 0; i < n; i++) {
        if(abs(current[i] - target[i]) > 5) {
            ans += 10 - abs(current[i] - target[i]);
        } else {
            ans += abs(current[i] - target[i]);
        }
    }
    cout << ans;
    return 0;
}
