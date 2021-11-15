#include <iostream>
using namespace std;

int main() {
    int tipo, filas, i, linea = 0;
    
    cout << "Tipo de triángulo (1/2/3): ";
    cin >> tipo;
    
    cout << "Número de filas: ";
    cin >> filas;
    
    switch(tipo) {
        case 1: 
            
            for(i = filas; i = 1; i--) { 
                
                f = filas * 2;
                
                while(f >= filas) {
                    
                    cout << "*";
                    f = f - 1;
                
                }
                
                
                if(f == filas - 1) {
                    cout << "*";
                    
                    for(f; f > 1 && f < filas -1; f--) {
                        cout << "o";
                    }
                    
                    cout << "*";
                    
                }
                
                if(f == filas - 2) {
                    cout << "*";
                    
                    for(f; f > 1 && f < filas -1; f--) {
                        cout << "o";
                    }
                    
                    cout << "*";
                    
                }
                
                
                linea = i;
                
                
                cout << linea 
                
                
                
                
            }
            
        case 2: 
            
            
            
            
            
        case 3:
            
            
    }
    
    
    
    return 0;
}