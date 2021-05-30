#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, d;
    cin >> t;
    bool check;
    while(t--) {
        cin >> n >> d;
        int a[n];
        check = false;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] > d) {
                check = true;
            }
        }
        if(check) {
            sort(a, a + n);
            if(a[0] + a[1] > d) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
