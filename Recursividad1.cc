#include<iostream>
#include<math.h>
using namespace std;

int sumaDigitos(int suma, int numero);
void calculoSuma(int);

int main() {
    int numero, suma = 0;
    
    cout << "Introduce un número: ";
    cin >> numero;
    
    calculoSuma(numero);
    
    cout << sumaDigitos(suma, numero) << endl;
    
    return 0;
}

int sumaDigitos(int suma, int numero) {
    int digito = 0;
    suma = 0;
    
    if(numero <= 0) {
        return suma;
        
    } else {
        digito = numero % 10;
        suma += digito;
        
        return suma + sumaDigitos(suma, numero / 10);
    }
}

void calculoSuma(int numero) {
    int extra, exponente = 0, elevado = 0;
    
    extra = numero;
    
    if(numero <= 0) {
        
        cout << "= ";
        
    } else {
        
        while(extra >= 10) {
        
            extra /= 10;
            exponente++;
        }
    
        cout << extra << " ";
    
        if(exponente > 0) {
            
            cout << "+ ";
        }
        
        elevado = pow(10, exponente);
        
        return calculoSuma(numero % elevado);
    }
}