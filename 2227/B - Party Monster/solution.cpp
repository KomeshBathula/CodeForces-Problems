#include<iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int open = 0;
        for (char c : str) {
            if (c == '(') open++;
        } 
        cout << (2 * open == n ? "YES" : "NO") << endl;
        
    }
    return 0;
}