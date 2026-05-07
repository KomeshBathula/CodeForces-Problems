#include<iostream>
using namespace std;
 
int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n];
 
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    for (int i = 0; i < n; i++) {
        bool perfectDay = true;
 
        for (int j = max(0, i - x); j < i; ++j) {
            if (arr[j] < arr[i]) {
                perfectDay = false;
                break;
            }
        }
 
        for (int j = i + 1; j <= min(i + y, n - 1); ++j) {
            if (arr[j] < arr[i]) {
                perfectDay = false;
                break;
            }
        }
 
        if (perfectDay) {
            cout << i + 1;
            break;
        }
    }
}