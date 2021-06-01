#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    bool check = false, prime = true;
    cin >> n >> m;
    for(int i = 2; i <= m / 2; i++) {
        if(m % i == 0) {
            check = true;
            break;
        }
    }
    if(n + 1 == m && !check) {
        cout << "YES";
    } else {
        for(int i = n + 1; i < m; i++) {
            for(int j = 2; j <= m / 2; j++) {
                if(i % j == 0) {
                    prime = false;
                    break;
                } else {
                    prime = true;
                }
            }
            if(prime) {
                break;
            }
        }
        if(check || prime) {
            cout << "NO";
        } else {
            cout << "YES";
        }
    }
    return 0;
}
