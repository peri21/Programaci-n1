#include<iostream>
using namespace std;

int main() {
    int he, me, hs, ms, te = 0, ts = 0, tt = 0;
    float importe = 0;
    
    cout << "Introduce la hora y los minutos de entrada, respectivamente: ";
    cin >> he >> me; 
    
    cout << "Introduce la hora y los minutos de salida, respectivamente: ";
    cin >> hs >> ms;
    
    te = (he * 60) + me;
    ts = (hs * 60) + ms;
    tt = ts - te;
    
    importe = tt / 30;
    
    cout << "Tiempo de permanencia: " << tt << " minutos" << endl;
    cout << "Importe total: " << importe << " euros" << endl;
    
    return 0;
}