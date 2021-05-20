#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char photo[n][m];
    bool check = true;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> photo[i][j];
            if(check && (photo[i][j] == 'C' || photo[i][j] == 'M' || photo[i][j] == 'Y')) {
                check = false;
            }
        }
    }
    if(!check) {
        cout << "#Color";
    } else {
        cout << "#Black&White";
    }
    return 0;
}
