#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ascii1[26], ascii2[26];
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    bool check = true;
    for(int i = 0; i < 26; i++) {
        ascii1[i] = i + 65;
    }
    for(int i = 0; i < 26; i++) {
        ascii2[i] = i + 97;
    }
    for(int i = 0; i < 26; i++) {
        for(auto x : s) {
            if(ascii1[i] == (int)x || ascii2[i] == (int)x) {
                check = true;
                break;
            } else {
                check = false;
            }
        }
        if(!check) {
            break;
        }
    }
    if(check) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
