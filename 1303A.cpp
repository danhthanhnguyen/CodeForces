#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans;
    cin >> n;
    string s;
    while(n--) {
        cin >> s;
        ans = 0;
        for(int i = 1; i < s. length(); i++) {
            if(s[i] == '0' && s[i - 1] == '1') {
                for(int j = i + 1; j < s.length(); j++) {
                    if(s[j] == '1') {
                        ans += j - i;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
