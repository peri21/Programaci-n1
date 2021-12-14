#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
    int numeros[100];
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;
    
    srand(time(NULL));
    
    for(int i = 0; i < 100; i++) {
        
        numeros[i] = 1 + rand()%(10 - 1);
        
        if(numeros[i] == 1) {
            
           n1++;
        }
        
        if(numeros[i] == 2) {
            
           n2++;
        }
        
        if(numeros[i] == 3) {
            
           n3++;
        }
        
        if(numeros[i] == 4) {
            
           n4++;
        }
        
        if(numeros[i] == 5) {
            
           n5++;
        }
        
        if(numeros[i] == 6) {
            
           n6++;
        }
        
        if(numeros[i] == 7) {
            
           n7++;
        }
        
        if(numeros[i] == 8) {
            
           n8++;
        }
        
        if(numeros[i] == 9) {
            
           n9++;
        }
    }
    
    cout << "9. ";
    for(int i = 0; i < n9; i++) {
        
        cout << "\u2587";
    }
    cout << "\n";
    
    cout << "8. ";
    for(int i = 0; i < n8; i++) {
        
        cout << "\u2587";
    }
    cout << "\n";
    
    cout << "7. ";
    for(int i = 0; i < n7; i++) {
        
        cout << "\u2587";
    }
    cout << "\n";
    
    cout << "6. ";
    for(int i = 0; i < n6; i++) {
        
        cout << "\u2587";
    }
    cout << "\n";
    
    cout << "5. ";
    for(int i = 0; i < n5; i++) {
        
        cout << "\u2587";
    }
    cout << "\n";
    
    cout << "4. ";
    for(int i = 0; i < n4; i++) {
        
        cout << "\u2587";
    }
    cout << "\n";
    
    cout << "3. ";
    for(int i = 0; i < n3; i++) {
        
        cout << "\u2587";
    }
    cout << "\n";
    
    cout << "2. ";
    for(int i = 0; i < n2; i++) {
        
        cout << "\u2587";
    }
    cout << "\n";
    
    cout << "1. ";
    for(int i = 0; i < n1; i++) {
        
        cout << "\u2587";
    }
    cout << "\n";
    
    return 0;
}