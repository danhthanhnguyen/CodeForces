#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans, count;
    cin >> n;
    long a;
    while(n--) {
        cin >> a;
        int ana[a];
        ans = 0;
        count = 1;
        int i = 0;
        while(a > 0) {
            ana[i] = a % 10 * count;
            a /= 10;
            count *= 10;
            ans++;
            i++;
        }
        for(int k = 0; k < i; k++) {
            if(ana[k] == 0) {
                ans--;
            }
        }
        cout << ans << endl;
        for(int j = i - 1; j >= 0; j--) {
            if(ana[j] != 0) {
                cout << ana[j] << " ";
            }
        }
    }
    return 0;
}
