#include<bits/stdc++.h>
using namespace std; 
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string str;
        cin >> str;
 
        int firstIndex = -1, lastIndex = -1;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1') {
                firstIndex = i;
                break;
            }
        }
 
        if (firstIndex == -1) {
            cout << 0 << endl;
            continue;
        }
 
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1') {
                lastIndex = i;
            }
        }
        
        int toBeDeleted = 0;
        for (int i = firstIndex; i <= lastIndex; i++) {
            if (str[i] == '0') toBeDeleted ++;
        }
 
        cout << toBeDeleted << endl;
    }
}