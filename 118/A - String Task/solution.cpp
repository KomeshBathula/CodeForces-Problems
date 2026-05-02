#include<bits/stdc++.h>
#include<cctype>
 
using namespace std;
 
bool isVowel(char ch) {
    string vowels = "aeyiouAEYIOU";
    return vowels.find(ch) != string :: npos;
}
 
 
int main() {
    string input;
    cin >> input;
 
    string result = "";
    for (int i = 0; i < input.length(); i++) {
        // consonant
        if (!isVowel(input[i])) {
            result += ".";
            result += tolower(input[i]);
        }
        
    }
 
    cout << result;
}