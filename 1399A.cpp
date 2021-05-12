#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    int i = 0, a[t][101];
    while(i < t) {
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            a[i][100] = n;
        }
        i++;
    }
    bool check;
    int size;
    for(int i = 0; i < t; i++) {
        // size = sizeof(a[i]) / sizeof(a[i][0]);
        size = a[i][100];
        sort(a[i], a[i] + size);
        check = true;
        for(int j = 0; j < size - 1; j++) {
            if(abs(a[i][j] - a[i][j + 1]) > 1) {
                check = false;
                break;
            }
        }
        if(check) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
