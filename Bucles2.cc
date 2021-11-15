#include<iostream>
using namespace std;

int main() {
    int caramelos, regalo = 0, vendido = 0;
    
    cout << "Introduce el número de caramelos que ha comprado un niño: ";
    cin >> caramelos;
    
    while(caramelos != 0) {
        vendido = vendido + caramelos;
        
        if(caramelos >= 5) {
            regalo = caramelos / 5 + regalo;
            
        } else {}
        
        cout << "Introduce el número de caramelos que ha comprado un niño: ";
        cin >> caramelos;
    }
    
    cout << vendido << " " << regalo << " ";
    
    if(vendido / regalo <= 5) {
        cout << "NO RENTABLE" << endl;
    
    } else {
        cout << "RENTABLE" << endl;
    }
    
    return 0;
}