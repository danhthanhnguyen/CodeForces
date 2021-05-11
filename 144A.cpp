#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    int i = 1;
    int imax = 0, imin = 0;
    while(i < n) {
        if(arr[i] > max) {
            max = arr[i];
            imax = i;
        }
        i++;
    }
    int j = 1;
    while(j < n) {
        if(arr[j] <= min) {
            min = arr[j];
            imin = j;
        }
        j++;
    }
    if(imax < imin) {
        cout << imax + (n - imin - 1);
    } else {
        cout << imax + (n - imin - 1) - 1;
    }
    return 0;
}
