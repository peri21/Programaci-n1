#include<iostream>
using namespace std;

int main() {
    int a, b, c, aux; 
    
    cout << "Introduce un valor para a, b y c, respectivamente: ";
    cin >> a >> b >> c;
    
    aux = a;
    a = b;
    b = c;
    c = aux;
    
    cout << "Ahora a ha tomado el valor de b, b a tomado el valor de c, y c ha tomado el valor de a: por lo que a = " << a << ", b = " << b << " y c = " << aux << endl;
    
    return 0;
}