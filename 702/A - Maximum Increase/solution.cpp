#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int prevValue = INT_MIN;
    int maxLength = 1;
    int currLength = 1;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr > prevValue && prevValue != INT_MIN) {
            currLength++;
        }
        else {
            currLength = 1;
        }
        maxLength = max(maxLength, currLength);
        prevValue = curr;
    }
    cout << maxLength << endl;
    return 0;
}