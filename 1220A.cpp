#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, z = 0, o = 0;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    for(char x : s) {
        if(x == 'z') {
            z++;
        }
        if(x == 'n') {
            o++;
        }
    }
    for(int i = 0; i < o; i++) {
        cout << 1 << " ";
    }
    for(int j = 0; j < z; j++) {
        cout << 0 << " ";
    }
}
