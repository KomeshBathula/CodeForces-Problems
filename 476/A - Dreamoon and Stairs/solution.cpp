#include<iostream>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int lower_bound = (n + 1) / 2;
    int ans = ((lower_bound + m - 1) / m) * m;
 
    if (ans > n) cout << -1;
    else 
        cout << ans;
    
}