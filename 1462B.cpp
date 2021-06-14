#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    string y;
    while(t--) {
        cin >> n;
        cin.ignore();
        getline(cin, y);
        if(y.substr(0, 4) == "2020" || y.substr(n - 4, 4) == "2020") {
            cout << "YES\n";
        } else if(y.substr(0, 1) == "2" && y.substr(n - 3, 3) == "020") {
            cout << "YES\n";
        } else if(y.substr(0, 2) == "20" && y.substr(n - 2, 2) == "20") {
            cout << "YES\n";
        } else if(y.substr(0, 3) == "202" && y.substr(n - 1, 1) == "0") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
