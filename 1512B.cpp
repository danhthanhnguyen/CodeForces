#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        string s[n];
        for(int i = 0; i < n; i++) {
            cin >> s[i];
        }
        int r1 = 0, c1 = 0;
        bool search = false, out = false;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(search && s[i][j] == '*') {
                    if(j != c1 && i != r1) {
                        s[i][c1] = '*';
                        s[r1][j] = '*';
                    }
                    if(j == c1) {
                        if(j == n - 1) {
                            s[r1][c1 - 1] = '*';
                            s[i][c1 - 1] = '*';
                        } else {
                            s[r1][c1 + 1] = '*';
                            s[i][c1 + 1] = '*';
                        }
                    }
                    if(i == r1) {
                        if(i == 0) {
                            s[r1 + 1][c1] = '*';
                            s[r1 + 1][j] = '*';
                        } else {
                            s[r1 - 1][c1] = '*';
                            s[r1 - 1][j] = '*';
                        }
                    }
                    out = true;
                    break;
                }
                if(s[i][j] == '*') {
                    r1 = i;
                    c1 = j;
                    search = true;
                }
            }
            if(out) {
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            cout << s[i] << endl;
        }
    }
    return 0;
}
