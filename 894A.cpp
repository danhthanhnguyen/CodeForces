#include<bits/stdc++.h>
using namespace std;

int main() {
    int p, n, ans = 0, index;
    string s;
    getline(cin, s);
    fflush(stdin);
    for(int i = 0; i < s.size(); i++) {
        p = 0;
        n = 0;
        if(s[i] == 'A') {
            index = i;
        } else {
            continue;
        }
        for(int j = 0; j < index; j++) {
            if(s[j] == 'Q') {
                p++;
            }
        }
        for(int k = index + 1; k < s.size(); k++) {
            if(s[k] == 'Q') {
                n++;
            }
        }
        if(p != 0 && n != 0) {
            ans += p * n;
        }
    }
    cout << ans;
    return 0;
}
