#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float distancia, vmax, ts, vsol = 0;
    
    cout << "Distancia recorrida por el coche (metros): ";
    cin >> distancia;
    
    cout << "Velocidad máxima permitida en dicho tramo (km/h): ";
    cin >> vmax;
    
    cout << "Tiempo tardado en recorrer dicha distancia (segundos): ";
    cin >> ts;
    
    distancia = distancia * pow(10, -3);
    ts = ts / 3600;
    vsol = distancia / ts;
    
    if(vsol <= vmax) {
        cout << "OK";
    
    } else if(vsol <= ((vmax * 0.20) + vmax) && (vsol > vmax)) {
        cout << "MULTA";    
        
    } else if(vsol >= (vmax * 0.20) + vmax) {
        cout << "PUNTOS";
        
    } else {
        cout << "ERROR";
    }
    
    cout << "\n";
    
    return 0;
}