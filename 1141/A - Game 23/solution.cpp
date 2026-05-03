#include<bits/stdc++.h>
#include<cstdlib>
 
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    if (m % n != 0) {
        cout << -1 << endl;
        exit(0);
    }
 
    int x = m / n;
 
    int count = 0;
    while (x % 2 == 0) {
        count++;
        x /= 2;
    }
    while (x % 3 == 0) {
        count++;
        x /= 3;
    }
    
    if (x != 1) {
        cout << -1;
        exit(0);
    }
 
    cout << count;
}