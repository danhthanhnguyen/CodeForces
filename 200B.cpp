#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    float ml, orange = 0;
    int cocktail = n;
    while(n--) {
        cin >> ml;
        orange += (ml / 100);
    }
    cout << orange * 100 / cocktail;
    return 0;
}
