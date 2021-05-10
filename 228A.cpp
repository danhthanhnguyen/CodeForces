#include<bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    long horseshoes[4];
    int k = 0;
    while(k < 4) {
        cin >> horseshoes[k];
        k++;
    }
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            if(horseshoes[i] == horseshoes[j]) {
                ans++;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
