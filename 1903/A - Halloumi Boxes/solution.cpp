#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while (t-- > 0) {
        int n, k;
        cin>>n>>k;
        
        int arr[n];
        
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        
        if (is_sorted(arr, arr + n) || k > 1)  
            cout<<"YES
";
        else 
            cout<<"NO
";
            
    }
    
    return 0;
    
}