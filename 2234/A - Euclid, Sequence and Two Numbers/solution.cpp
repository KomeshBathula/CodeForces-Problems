#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t, n;
 
    cin >> t;
 
    while (t-- > 0) {
        cin >> n;
        int arr[n];
 
        for (int i = 0; i < n; i++) cin >> arr[i];
 
        sort(arr, arr + n, greater<int>());        
 
        bool allCheck = true;
 
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && i + 2 < n) {
                if (arr[i] % arr[i + 1] != arr[i + 2]) 
                    allCheck = false;
            }
        }
 
        if (allCheck) cout << arr[0] << " " << arr[1];
        else cout << -1;
        
        cout << endl;
 
    }
}