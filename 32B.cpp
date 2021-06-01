#include<bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    string s, ans = "";
    getline(cin, s);
    fflush(stdin);
    for(int i = 0; i < s.size(); i++) {
        ans += s[i];
        if(ans == ".") {
            cout << 0;
            ans = "";
        } else if(ans == "-.") {
            cout << 1;
            ans = "";
        } else if(ans == "--") {
            cout << 2;
            ans = "";
        }
    }
    return 0;
}
