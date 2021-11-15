#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    float precio, azar, total = 0, descuento = 0;
    
    srand(time(NULL));
    
    cout << "BIENVENIDO AL SORTEO DE BOLAS" << endl;
    cout << "*****************************" << endl;
    cout << "COLOR   \tDESCUENTO" << endl;
    cout << "Blanca  \t0%" << endl;
    cout << "Amarilla\t5%" << endl;
    cout << "Azul    \t7%" << endl;
    cout << "Roja    \t10%" << endl;
    cout << "*****************************" << endl;
    
    cout << "Introduce el precio del producto: ";
    cin >> precio;
    
    while(precio != -1) {
        azar = rand() % 4;
        
        if(azar == 0) {
            cout << "Ha salido una bola blanca\n";
            
            descuento = precio;
            
        } else if(azar == 1) {
            cout << "Ha salido una bola amarilla\n";
            
            descuento = precio - (precio * 0.05);
        
        } else if(azar == 2) {
            cout << "Ha salido una bola azul\n";
            
            descuento = precio - (precio * 0.07);
        
        } else if(azar == 3) {
            cout << "Ha salido una bola roja\n";
            
            descuento = precio - (precio * 0.1);
        }
        
        total = total + descuento;
        
        cout << "\n";
        
        cout << "Introduce el precio del producto: ";
        cin >> precio;
        
    }
    
    cout << "\n";
    
    cout << "Total = " << total << " euros" << endl;
    
    return 0;
}