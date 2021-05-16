#include<bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;
    int a, b;
    while(t--) {
        cin >> a >> b;
        cout << pow(max(min(a, b) * 2, max(a, b)), 2) << endl;
    }
    return 0;
}
