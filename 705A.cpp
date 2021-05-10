#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "I hate it";
    string z = "I love it";
    string ans = s;
    int i = 1;
    while(i < n) {
        if((i + 1) % 2 != 0) {
            ans = ans.replace(ans.find("it"), 2, "that ") + s;
        } else {
            ans = ans.replace(ans.find("it"), 2, "that ") + z;
        }
        i++;
    }
    cout << ans;
    return 0;
}
