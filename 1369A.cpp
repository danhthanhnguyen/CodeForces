#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long n;
    while(t--) {
        cin >> n;
        if(n % 4 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
