#include<iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int i = 0; i <= n; i++) {
        // spaces 
        for (int k = 0; k < n - i ; k++) 
            cout << "  ";
        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }
        cout << "
";
    }
 
    for (int i = n - 1; i >= 0; i--) {
        for (int k = 0; k < n - i; k++) 
            cout << "  ";
 
        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }
        cout << "
";
    }
}