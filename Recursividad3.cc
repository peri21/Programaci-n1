#include<iostream>
using namespace std;

void dibujarOruga(int, char);

int main() {
    int years;
    char color;
    
    cout << "BIENVENIDO AL SIMULADOR DE CRECIMIENTO DE ORUGAS NEGRI-AMARILLAS" << endl;
    cout << "****************************************************************" << endl;
    
    do {
    cout << "Introduce el número de años de crecimiento: ";
    cin >> years;
    
    } while(years < 0);
    
    do {
    cout << "Introduce el color del anillo al nacer(n/a): ";
    cin >> color;
    
    } while(color != 'n' && color != 'a');
    
    cout << "La oruga tendrá este aspecto:\n" << endl;
    
    dibujarOruga(years, color);
    
    cout << "\n";
    
    return 0;
}

void dibujarOruga(int years, char color) {
    
    if(years == 0) {
        
        cout << "☻" << endl;
        
    } else {
        
       if(color == 'n') {
           
           cout << "N";
           
           color = 'a';
           
       } else if(color == 'a') {
           
           cout << "A";
           
           color = 'n';
       }
        
        return dibujarOruga(years - 1, color);
    }
}