#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int arr[n], sum = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
 
    sort(arr, arr + n);
 
    int count = 0, maxSum = 0;
 
    for (int i = n - 1; i >= 0; i--) {
        maxSum += arr[i];
        count++;
 
        if (maxSum > sum - maxSum) break;
    }
    
    cout << count;
 
    return 0;
}