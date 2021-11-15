#include<iostream>
using namespace std;

void leerPar(char& contorno, char& tipo, int& filas);
void dibuja(char& espacio, int& sumaC, int& sumaE, char contorno, char tipo, int filas);

int main() {
    int filas, sumaC, sumaE;
    char contorno, tipo, espacio;
    
    leerPar(contorno, tipo, filas);
    
    dibuja(espacio, sumaC, sumaE, contorno, tipo, filas);
    
    cout << "El número de caracteres dibujados es " << sumaC << endl;
    cout << "El tamaño del espacio interior es " << sumaE << endl;
    
    return 0;
}

void leerPar(char& contorno, char& tipo, int& filas) {
    
    cout << "Introduce un carácter: ";
    cin >> contorno;
    
    cout << "Introduce otro carácter (R/V): ";
    cin >> tipo;
    
    while(tipo != 'R' && tipo != 'V') {
        
        cout << "Introduce otro carácter (R/V): ";
        cin >> tipo;
    }
    
    cout << "Introduce un número (entre 4 y 20): ";
    cin >> filas;
    
    while(filas < 4 || filas > 20) {
        
       cout << filas << " no es un número válido" << endl;
       
       cout << "Introduce el número de filas (4 - 20): ";
       cin >> filas;
    }
}

void dibuja(char& espacio, int& sumaC, int& sumaE, char contorno, char tipo, int filas) {
    espacio = ' ';
    sumaC = 0;
    sumaE = 0;
    
    
    
    switch(tipo) {
    
        case 'R':
            for(int niveles = 1; niveles <= filas; niveles++) {
        
                for(int linea = 1; linea <= filas; linea++) {
            
                    cout << contorno;
                    sumaC++;
                }
        
                cout << "\n";
            }
        break;
            
        case 'V':
            for(int limites = 1; limites <= filas; limites++) {
                
                cout << contorno;
                sumaC++;
            }
            
            cout << "\n";
                
            for(int interior = 1; interior <= filas - 2; interior++) {
                
                cout << contorno;
                sumaC++;
                
                for(int relleno = 1; relleno <= filas - 2; relleno++) {
                
                    cout << espacio;
                    sumaE++;
                }
                
                cout << contorno << endl;
                sumaC++;
            }    
                
            for(int limites = 1; limites <= filas; limites++) {
                
                cout << contorno;
                sumaC++;
            }
            
            cout << "\n";
    }
}