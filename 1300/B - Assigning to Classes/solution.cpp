#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int arr[2 * n];
 
        for (int i = 0; i < 2*n; i++) {
            cin >> arr[i];
        }
        
        sort(arr, arr + 2 * n);
        
        if (2 * n == 2) {
            cout << arr[1] - arr[0] << endl;
        }
        else 
            cout << abs(arr[(2 * n - 1) / 2] - arr[((2 * n - 1) / 2) + 1]) << endl;
    }
}