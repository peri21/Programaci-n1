#include<iostream>
using namespace std;

int main() {
    char tam, top;
    float p1 = 0, p2 = 0, p3 = 0;
    
    cout << "------ El puesto de Irene ------" << endl;
    cout << "Topping" << endl;
    cout << "Fruta\t0.50" << endl;
    cout << "Dulse\t0.35" << endl;
    cout << "Sirope  0.30" << endl;
    cout << "Introduce tamaño del helado (p/g): ";
    cin >> tam;
    
    if(tam == 'p') {
        cout << "Tipo de topping (f/d/s): ";
        cin >> top;
        
        if(top == 'f') {
            p1 = 1.75 + 0.5;
    
            cout << "El precio del helado es: " << p1;
        
        } else if(top == 'd') {
            p2 = 1.75 + 0.35;
        
            cout << "El precio del helado es: " << p2;
            
        } else if(top == 's') {
            p3 = 1.75 + 0.30;
            
            cout << "El precio del helado es: " << p3;
            
        } else {
            cout << "Caracter no reconocido";
        }
        
    } else if(tam == 'g') {
        cout << "Tipo de topping (f/d/s): ";
        cin >> top;
        
        if(top == 'f') {
            p1 = 2.20 + (0.5 * 2);
    
            cout << "El precio del helado es: " << p1;
        
        } else if(top == 'd') {
            p2 = 2.20 + (0.35 * 2);
        
            cout << "El precio del helado es: " << p2;
            
        } else if(top == 's') {
            p3 = 2.20 + (0.30 * 2);
            
            cout << "El precio del helado es: " << p3;
            
        } else {
            cout << "Caracter no reconocido";
        }
        
    } else {
        cout << "Caracter no reconocido";
    }
    
    cout << "\n";
    
    return 0;
}