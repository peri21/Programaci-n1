#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;

void generarNumero(int& azar1, int& azar2, int& azar3);
void pedirNumero(int& numero1, int& numero2, int& numero3);
void combinacionColores(int numero1, int numero2, int numero3, int azar1, int azar2, int azar3, string& color1, string& color2, string& color3);

int main() {
    int azar1, azar2, azar3;
    int numero1, numero2, numero3;
    string color1, color2, color3;
    
    generarNumero(azar1, azar2, azar3);

    while(numero1 != azar1 || numero2 != azar2 || numero3 != azar3) {
    
        pedirNumero(numero1, numero2, numero3);

        combinacionColores(numero1, numero2, numero3, azar1, azar2, azar3, color1, color2, color3);
        
        cout << numero1 << " " << numero2 << " " << numero3 << " " << color1 << " " << color2 << " " << color3 << endl;
    } 
    
    cout << "FIN DEL JUEGO" << endl;
    
return 0;
}

void generarNumero(int& azar1, int& azar2, int& azar3) {
    
    srand(time(NULL));
    azar1 = rand() % 10;
    azar2 = rand() % 10;
    azar3 = rand() % 10;
}

void pedirNumero(int& numero1, int& numero2, int& numero3) {
    
        cout << "Introduce un número: ";
        cin >> numero1;

        while(numero1 <= 0 && numero1 >= 9) {
            
            cout << "El número debe estar entre 0 y 9" << endl;
            cout << "Introduce un número: ";
            cin >> numero1;
        }

        cout << "Introduce un número: ";
        cin >> numero2;

        while(numero2 <= 0 && numero2 >= 9) {
            
            cout << "El número debe estar entre 0 y 9" << endl;
            cout << "Introduce un número: ";
            cin >> numero2;
        }
        
        cout << "Introduce un número: ";
        cin >> numero3;

        while(numero3 <= 0 && numero3 >= 9) {
            
            cout << "El número debe estar entre 0 y 9" << endl;
            cout << "Introduce un número: ";
            cin >> numero3;
        }
}

void combinacionColores(int numero1, int numero2, int numero3, int azar1, int azar2, int azar3, string& color1, string& color2, string& color3) {
    
    if(numero1 == azar1) {
        
        color1 = "verde";
        
    } else if(numero1 != azar1 && (numero1 == azar2 || numero1 == azar3)) {
        
        color1 = "amarillo";
        
    } else if(numero1 != azar1 && numero1 != azar2 && numero1 != azar3) {
        
        color1 = "rojo";
    }

    if(numero2 == azar2) {
        
        color2 = "verde";
        
    } else if(numero2 != azar2 && (numero2 == azar2 || numero2 == azar3)) {
        
        color2 = "amarillo";
        
    } else if(numero2 != azar2 && numero2 != azar1 && numero2 != azar3) {
        
        color2 = "rojo";
    }
    
    if(numero3 == azar3) {
        
        color3 = "verde";
        
    } else if(numero3 != azar3 && (numero3 == azar1 || numero3== azar2)) {
        
        color3 = "amarillo";
        
    } else if(numero3 != azar3 && numero3 != azar1 && numero3 != azar2) {
        
        color3 = "rojo";
    }
}