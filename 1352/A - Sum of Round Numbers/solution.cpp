#include<bits/stdc++.h>
using namespace std;
 
 
void getSumOfRoundNumbers(int n) {
    vector<int> arr;
    int power = 1;
    
    while (n > 0) {
        if (n % 10 > 0) 
            arr.push_back((n % 10) * power);
        n /= 10;
        power *= 10;
    }
 
    cout << arr.size() << endl;
    for (auto number : arr) 
        cout << number << " ";
    cout << endl;
}
 
 
int main() {
    int t;
    cin >> t;
 
    int n;
    while (t-- > 0) {
        cin >> n;
        getSumOfRoundNumbers(n);
    }
 
    return 0;
}