#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, px, py;
    bool check;
    string s;
    cin >> t;
    while(t--) {
        check = false;
        cin >> px >> py;
        cin.ignore();
        getline(cin, s);
        if(px > 0) {
            if(count(s.begin(), s.end(), 'R') >= px) {
                if(py > 0) {
                    if(count(s.begin(), s.end(), 'U') >= py) {
                        check = true;
                    }
                } else if(py < 0) {
                    if(count(s.begin(), s.end(), 'D') >= abs(py)) {
                        check = true;
                    }
                } else {
                    check = true;
                }
            }
        } else if(px < 0) {
            if(count(s.begin(), s.end(), 'L') >= abs(px)) {
                if(py > 0) {
                    if(count(s.begin(), s.end(), 'U') >= py) {
                        check = true;
                    }
                } else if(py < 0){
                    if(count(s.begin(), s.end(), 'D') >= abs(py)) {
                        check = true;
                    }
                } else {
                    check = true;
                }
            }

        } else {
            if(py > 0) {
                if(count(s.begin(), s.end(), 'U') >= py) {
                    check = true;
                }
            } else {
                if(count(s.begin(), s.end(), 'D') >= abs(py)) {
                    check = true;
                }
            }
        }
        if(check) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
