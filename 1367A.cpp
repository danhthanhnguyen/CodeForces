#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    while(n--) {
        getline(cin, s);
        for(int i = 1; i < s.size() - 1; i++) {
            s.erase(i, 1);
        }
        cout << s << endl;
    }
    return 0;
}
