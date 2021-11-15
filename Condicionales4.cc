#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int A, B, r1 = 0, r2 = 0;
    
    cout << "Introduce el canal del que partes: ";
    cin >> A;
    
    cout << "Introduce el canal al que quieres llegar: ";
    cin >> B;
    
    if(A < B) {
        r1 = B - A;
        
        if((r1 * 2) > 50) {
            r2 = abs(r1 - 99);
            
            cout << r2 << " anterior" << endl;
            
        } else {
            cout << r1 << " siguiente" << endl;
        }
        
    } else {
        r1 = A - B;
        
        if((r1 * 2) > 50)  {
            r2 = abs(r1 - 99);
            
            cout << r2 << " siguiente" << endl;
            
        } else {
            cout << r1 << " anterior" << endl;
        }
    }
      
    return 0;
}