#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, level[200], p, q;
    cin >> n >> p;
    bool check = true;
    for(int i = 0; i < p; i++) {
        cin >> level[i];
    }
    cin >> q;
    for(int i = p; i < p + q; i++) {
        cin >> level[i];
    }
    if(p == 0 && q == 0) {
        cout << "Oh, my keyboard!";
        return 0;
    }
    while(n--) {
        for(int i = 0; i < p + q; i++) {
            if(n + 1 == level[i]) {
                check = true;
                break;
            } else {
                check = false;
            }
        }
        if(!check) {
            break;
        }
    }
    if(check) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    return 0;
}
