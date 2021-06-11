#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 2;
    cin >> n;
    if(n % 2 != 0) {
        cout << -1;
        return 0;
    }
    while(i <= n) {
        cout << i << " " << i - 1 << " ";
        i += 2;
    }
    return 0;
}
