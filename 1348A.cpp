#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    long sum1, sum2;
    while(t--) {
        cin >> n;
        sum1 = pow(2, n);
        sum2 = 0;
        for(int i = 1; i < n; i++) {
            if(i <= n / 2 - 1) {
                sum1 += pow(2, i);
            } else {
                sum2 += pow(2, i);
            }
        }
        cout << sum1 - sum2 << endl;
    }
    return 0;
}
