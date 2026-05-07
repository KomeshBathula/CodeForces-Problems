#include<iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    long long arr[n];
 
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
 
    long long ans = 0;
    long long cur = 1000000001;
    for (int i = n - 1; i >= 0; --i) {
        cur = max(0LL, min(cur - 1, arr[i]));
        ans += cur;
    }
 
    cout << ans;
}