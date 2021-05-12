#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    long point[n];
    for(int i = 0; i < n; i++) {
        cin >> point[i];
    }
    long max = point[0];
    long min = point[0];
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(point[i] < min) {
                min = point[i];
                ans++;
            }
            if(point[i] > max) {
                max = point[i];
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
