#include<iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    int sum = 0;
 
    while (t-- > 0) {
        string polyhedron;
        
        cin >> polyhedron;
 
        if (polyhedron == "Tetrahedron") sum += 4;
        else if (polyhedron == "Cube") sum += 6;
        else if (polyhedron == "Octahedron") sum += 8;
        else if (polyhedron == "Dodecahedron") sum += 12;
        else sum += 20;
    }
 
    cout << sum;
    
    return 0;
}