#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string seats[n];
    bool check = false;
    for(int i = 0; i < n; i++) {
        getline(cin, seats[i]);
        if(seats[i].find("OO") != string::npos && !check) {
            check = true;
            seats[i].replace(seats[i].find("OO"), 2, "++");
        }
    }
    if(check) {
        cout << "YES\n";
        for(int i = 0; i < n; i++) {
            cout << seats[i] << endl;
        }
    } else {
        cout << "NO";
    }
    return 0;
}
