#include<bits/stdc++.h>
using namespace std;

int main() {
    string g, o, s, name;
    getline(cin, g);
    getline(cin, o);
    getline(cin, s);
    fflush(stdin);
    name = g + o;
    sort(name.begin(), name.end());
    sort(s.begin(), s.end());
    if(name == s) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
