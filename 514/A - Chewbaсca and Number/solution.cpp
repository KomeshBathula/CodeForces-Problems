#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    
    long long res = 0;
    int digits = 0;
 
    while (n != 0) {
        int rev = n % 10;
        digits++;
 
        if (n < 10 && rev == 9) 
            res = res * 10 + 9;
        else {
            if (9 - rev > rev) 
            res = res * 10 + rev;
            else 
                res = res * 10 + (9 - rev);
 
        }
        n /= 10;
        
    }
    long long finalRes = 0;
    for (int i = 0; i < digits; i++) {
        finalRes = finalRes * 10 + (res % 10);
        res /= 10;
    }
 
    cout << finalRes;
 
    return 0;
}