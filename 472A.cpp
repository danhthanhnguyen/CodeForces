#include<bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    if(n % 2 == 0) {
        cout << n - 4 << " 4"; // even - 4 = even
    } else {
        cout << n - 9 << " 9"; // odd - 9 = odd
    }
    return 0;
}
