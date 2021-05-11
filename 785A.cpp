#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    string polyhedrons;
    cin.ignore();
    while(n--) {
        getline(cin, polyhedrons);
        if(polyhedrons == "Tetrahedron") {
            ans += 4;
        } else if(polyhedrons == "Cube") {
            ans += 6;
        } else if(polyhedrons == "Octahedron") {
            ans += 8;
        } else if(polyhedrons == "Dodecahedron") {
            ans += 12;
        } else {
            ans += 20;// Icosahedron
        }
    }
    cout << ans;
    return 0;
}
