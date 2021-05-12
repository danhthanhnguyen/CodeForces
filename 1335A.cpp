#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long candy;
    while(n--) {
        cin >> candy;
        if(candy % 2 == 0) {
            cout << candy / 2 - 1 << endl;
        } else {
            cout << candy / 2 << endl;
        }
    }
    return 0;
}
