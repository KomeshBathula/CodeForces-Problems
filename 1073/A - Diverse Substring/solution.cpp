#include<iostream>
#include<cctype>
#include<cstdlib>
#include<map>
 
using namespace std;
 
int main() {
    int n;
    string s;
    
    cin >> n;
    cin >> s;
    
    for (int i = 0; i < n - 1; i++) {
 
        if (s[i] != s[i + 1]) {
 
            cout << "YES
";
            cout << s[i] << s[i + 1];
            return 0;
        }
    }
 
    cout << "NO";
}