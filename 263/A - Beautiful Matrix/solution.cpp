#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int matrix[5][5];
    int x1 = 0, y1 = 0;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x1 = i; y1 = j;
            }
        }
    }
 
    cout << ((int)abs(2 - x1) + (int)abs(2 - y1));
    return 0;
}