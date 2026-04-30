#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int level = 0, used = 0;
 
    for (int i = 1; ; i++) {
        int cubesForLevel = i * (i + 1) / 2;
 
        if (used + cubesForLevel > n) break;
 
        used += cubesForLevel;
        level++;
    }
 
    cout << level;
    
}