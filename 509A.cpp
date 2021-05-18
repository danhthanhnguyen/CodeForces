#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0) {
                ans[i][j] = 1;
            } else if(j == 0) {
                ans[i][j] = 1;
            } else {
                ans[i][j] = ans[i][j - 1] + ans[i - 1][j];
            }
        }
    }
    cout << ans[n - 1][n - 1];
    return 0;
}
