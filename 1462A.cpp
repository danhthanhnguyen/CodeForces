#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        long long b[n];
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                cout << b[i / 2] << " ";
            } else {
                cout << b[n - i / 2 - 1] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
