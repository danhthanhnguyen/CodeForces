#include<bits/stdc++.h>
using namespace std;

int main() {
    long long d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    cout << min(d1, d2) + min(min(min(d1, d2) + max(d1, d2) * 2, d3 + max(d1, d2)), d3 * 2 + min(d1, d2));
    return 0;
}
