#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, l = 0, r = 0;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    for(char x : s) {
        if(x == 'L') {
            l++;
        } else {
            r++;
        }
    }
    cout << r + l + 1;
    return 0;
}
