#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    fflush(stdin);
    int ans = 0;
    char current = 'a';
    for(char c : s) {
        if(abs((int)c - (int)current) >= 14) {
            ans += abs(abs((int)c - (int)current) - 122) - 96;
        } else {
            ans += abs((int)c - (int)current);
        }
        current = c;
    }
    cout << ans;
    return 0;
}
