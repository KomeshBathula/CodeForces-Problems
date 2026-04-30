#include<bits/stdc++.h>
#include<cctype>
#include<cstdlib>
 
using namespace std;
 
int main() {
    string tableCard;
    cin >> tableCard;
 
    set<char> st;
 
    for (int i = 0; i < 5; i++) {
        string handCard;
        cin >> handCard;
        
        if (handCard.find(tableCard[0]) != string::npos || 
            handCard.find(tableCard[1]) != string::npos) {
            cout << "YES";
            exit(0);
        }
        
    }
 
    cout << "NO";
 
    return 0;
}