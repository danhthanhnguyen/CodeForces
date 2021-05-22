#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int card[n];
    for(int i = 0; i < n; i++) {
        cin >> card[i];
    }
    int s = 0, d = 0, l = 0, r = n - 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            if(card[r] > card[l]) {
                s += card[r];
                r--;
            } else {
                s += card[l];
                l++;
            }
        } else {
            if(card[r] > card[l]) {
                d += card[r];
                r--;
            } else {
                d += card[l];
                l++;
            }
        }
    }
    cout << s << " " << d;
    return 0;
}
