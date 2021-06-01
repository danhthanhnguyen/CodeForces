#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    bool check;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        int a[n], b[m];
        bool check = false;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(a[i] == b[j]) {
                    check = true;
                    break;
                }
            }
            if(check) {
                cout << "YES\n";
                cout << 1 << " " << a[i] << endl;
                break;
            }
        }
        if(!check) {
            cout << "NO\n";
        }
    }
    return 0;
}
