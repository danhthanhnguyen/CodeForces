#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);
    fflush(stdin);
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] != t[i]) {
            cout << "1";
        } else {
            cout << "0";
        }
    }
    return 0;
}
