#include<iostream>
#include<cmath>
using namespace std;

int main() {
    char letra; 
    float r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;
    
    cout << "\tDe todas estas operaciones:" << endl;
    cout << "a) 8 / 16 * 7" << endl;
    cout << "b) 8.0 / 16 * 7" << endl;
    cout << "c) 5 resto 3 + 5 / 2" << endl;
    cout << "d) potencia(3, valor absoluto(-8))/(9.9-5*1.5)" << endl;
    cout << "e) raíz(28)*5" << endl;
    cout << "¿cuál quieres realizar?: ";
    cin >> letra;
    
    switch(letra) {
        case 'a': r1 = 8 / 16 * 7;
                    cout << r1; break;
                    
        case 'b': r2 = 8.0 / 16 * 7;
                    cout << r2; break;
                    
        case 'c': r3 = (5 % 3) + (5 / 2);
                    cout << r3; break;
                    
        case 'd': r4 = pow(abs(-8), 3) / (9.9 - 5 * 1.5);
                    cout << r4; break;
        
        case 'e': r5 = sqrt(28) * 5;
                    cout << r5; break;
        
        default: cout << "No introdujo ningún caracter que correspondiese con una de las opciones";
    }
    
    cout << "\n";
    
    return 0;
}