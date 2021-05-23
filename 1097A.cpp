#include<bits/stdc++.h>
using namespace std;

int main() {
    string m, s;
    getline(cin, m);
    getline(cin, s);
    fflush(stdin);
    if(s.find(m[0]) == string::npos && s.find(m[1]) == string::npos) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
