#include<bits/stdc++.h>
using namespace std; 
 
int main() {
    int len;
    cin >> len;
 
    string t;
    cin >> t;
 
    string s = "";
    int i = 0;
    int jumps = 1;
    
    while (i < len) {
        s += t[i];
        i += jumps;
        jumps++;
    }
 
    cout << s << endl;
}