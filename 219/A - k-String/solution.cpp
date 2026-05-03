#include<bits/stdc++.h>
#include<cstdlib>
 
using namespace std;
 
 
int main() {
    int k;
    cin >> k;
 
    string s;
    cin >> s;
 
    map<char, int> mpp;
    for (int i = 0; i < s.length(); i++) {
        mpp[s[i]]++;
    }
 
    for (auto it : mpp) {
        int val = it.second;
        if (val % k != 0) {
            cout << -1 << endl;
            exit(0);
        }
    }
    
    string base = "";
    for (auto it : mpp) {
        char c = it.first;
        int count = it.second / k;
 
        base.append(count, c);
    }
 
    string result = "";
    for (int i = 0; i < k; i++) {
        result += base;
    }
 
    cout << result << endl;
}