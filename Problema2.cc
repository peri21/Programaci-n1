#include<iostream>
using namespace std;

int main() {
    int numero, r1 = 0, r2 = 0, r3 = 0, m1 = 0;
    
    cout << "---------------------------" << endl;
    cout << "Haciendo de adivino" << endl;
    cout << "---------------------------" << endl;
    
    cout << "Anota el dinero que llevas" << "\t (Pulsa enter para continuar)";
    cin.get();
    cout << "Multiplicalo por 10" << "\t\t (Pulsa enter para continuar)";
    cin.get();
    cout << "Suma 25" << "\t\t\t\t (Pulsa enter para continuar)";
    cin.get();
    cout << "Suma el número de hermanas" << "\t (Pulsa enter para continuar)";
    cin.get();
    cout << "Multiplica por 10" << "\t\t (Pulsa enter para continuar)";
    cin.get();
    cout << "Suma el número de hermanos" << "\t (Pulsa enter para continuar)"; 
    cin.get();
    cout << "Resta 250" << "\t\t\t (Pulsa enter para continuar)";
    cout << "\nIntroduce el resultado que te da: ";
    cin >> numero;
    
    r1 = numero % 10;
    m1 = numero / 10;
    r2 = m1 % 10;
    r3 = m1 / 10;
    
    cout << "\nTienes " << r1 << " hermanos, " << r2 << " hermanas y llevas " << r3 << " euros" << endl;
    
    return 0;
}