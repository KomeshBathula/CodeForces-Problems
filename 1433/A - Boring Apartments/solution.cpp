#include<bits/stdc++.h>
using namespace std; 
 
int main() {
    int t;
    cin >> t;
 
    int boringApartments[9][4] = {
                            {1, 11, 111, 1111},
                            {2, 22, 222, 2222},
                            {3, 33, 333, 3333},
                            {4, 44, 444, 4444},
                            {5, 55, 555, 5555},
                            {6, 66, 666, 6666}, 
                            {7, 77, 777, 7777}, 
                            {8, 88, 888, 8888}, 
                            {9, 99, 999, 9999}
                            };
    while (t--) {
        int x;
        cin >> x;
        int sum = 0;
        bool found = false;
 
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 4; j++) {
                if (boringApartments[i][j] != x) sum += (j + 1);
                else {
                    sum += (j + 1);
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
 
        cout << sum << endl;
    }
 
 
}