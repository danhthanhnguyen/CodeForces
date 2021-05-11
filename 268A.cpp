#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int color[n][2];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> color[i][j];
        }
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(color[i][0] == color[j][1]) {
                ans++;
            }
            if(color[i][1] == color[j][0]) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
