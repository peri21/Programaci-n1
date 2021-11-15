#include<iostream>
using namespace std;

int main() {
    int gotas, horas = 0, minutos = 0, segundos = 0;
    
    cout << "Número de gotas que han caído: ";
    cin >> gotas;
    
    segundos = gotas % 60;
    minutos = gotas / 60;
    horas = minutos / 60;
    
    while(minutos > 59) {
        minutos /= 60;
    }
    
    cout << "Han pasado " << horas << ":" << minutos << ":" << segundos << " horas" << endl;
    
    return 0;
}