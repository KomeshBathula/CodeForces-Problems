#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        int wrongMoves = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                // last column checking 
                if (j == m - 1 && i != n - 1 && c != 'D') wrongMoves++;
                // last row checking
                if (i == n - 1 && j != m - 1 && c != 'R') wrongMoves++;
            }
        }
 
        cout << wrongMoves << endl;
 
    }
}