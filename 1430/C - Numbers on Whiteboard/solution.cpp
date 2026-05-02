#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        cout << 2 << endl;
 
        int cur = n;
        for (int i = n - 1; i >= 1; i--) {
            cout << cur << " " << i << endl;
            cur = (cur + i + 1) / 2;
        }
 
    }
}