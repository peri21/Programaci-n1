#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float radiop, alturap, p1, p2, p3, volumenp = 0, volumenm = 0, volumeng = 0, r1 = 0, r2 = 0, r3 = 0;
    double pi = M_PI;
    
    cout << "Introduce el radio del pequeño en centímetros: ";
    cin >> radiop;
    
    cout << "Introduce la altura del pequeño en centímetros: ";
    cin >> alturap;
    
    cout << "Introduce el precio del pequeño: ";
    cin >> p1;
    
    cout << "Introdduce el precio del mediano: ";
    cin >> p2;
    
    cout << "Introduce el precio del grande: ";
    cin >> p3;
    
    volumenp = pi * pow(radiop, 2) * alturap;
    volumenm = (volumenp * 0.25) + volumenp;
    volumeng = volumenp * 1.5;
    
    r1 = p1 / volumenp;
    r2 = p2 / volumenm;
    r3 = p3 / volumeng;
    
    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    
    if(r1 > r2 && r1 > r3) {
        cout << "PEQUEÑO";
        
    } else if(r2 > r1 && r2 > r3) {
        cout << "MEDIANO";
        
    } else if(r3 > r1 && r3 > r2) {
        cout << "GRANDE";
        
    } else {
        cout << "Algo has hecho mal";
    }
    
    cout << "\n";
    
    return 0;
}