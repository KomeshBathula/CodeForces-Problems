#include<iostream>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    bool allUpeer = true;
    bool exceptFirstUpper = true;
 
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            allUpeer = false;
            if (i != 0) exceptFirstUpper = false;
        }
        if (i > 0 && islower(s[i])) 
            exceptFirstUpper = false;
    }
 
    if (allUpeer || exceptFirstUpper) {
        for (int i = 0; i < s.length(); i++) {
            if (islower(s[i])) s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }
 
    cout << s;
}