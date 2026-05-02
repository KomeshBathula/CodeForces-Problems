#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int arr[7];
    for (int i = 0; i < 7; i++) 
        cin >> arr[i];
 
    int day = 0;
    int i = 0;
    while (true) {
        if (i >= 7) i = 0;
        if (i < 7) n -= arr[i];
        
        if (n <= 0){
            day = i + 1;
            break;
        }
        i++;
    }
    cout << day << endl;
}