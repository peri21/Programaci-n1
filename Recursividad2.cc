#include<iostream>
#include<math.h>
using namespace std;

void controlPosicion(int, int&);
int calcularCifra(int, int, int);

int main() {
    int numero, posicion, conteo = 0;
    
    cout << "Introduce un número: ";
    cin >> numero;
    
    cout << "Introduce la posición: ";
    cin >> posicion;
    
    controlPosicion(numero, posicion);

    cout << "La cifra es " << calcularCifra(numero, posicion, conteo) << endl;
    
    return 0;
}

void controlPosicion(int numero, int& posicion) {
    int extra, cifras = 0;
    
    extra = numero;
    
    while(extra > 0) {
    
        extra /= 10;
        cifras++;
    }
    
    while(posicion < 0 || posicion > cifras) {
        
        cout << "La posición no es válida" << endl;
        
        cout << "Introduce la posición: ";
        cin >> posicion;
    }
}

int calcularCifra(int numero, int posicion, int conteo) {
    
    if(conteo == posicion) {
        
        return numero % 10;
        
    } else {
        
        conteo++;
    
        return calcularCifra(numero / 10, posicion, conteo);
    }
}