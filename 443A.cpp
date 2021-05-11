#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t = "";
    getline(cin, s);
    fflush(stdin);
    int n = s.size();
    int i = 1;
    while(i < n - 1) {
        if(t.find(s[i]) == -1) {
            t += s[i];
        }
        i += 3;
    }
    cout << t.size();
    return 0;
}
