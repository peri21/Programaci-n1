#include<iostream>
using namespace std;

void obtieneAnyo(int& year, int& intentos);
int sumaCifrasPares(int year, int cifra1, int cifra2, int cifra3, int cifra4, int& pares);
int sumaCifrasImpares(int year, int cifra1, int cifra2, int cifra3, int cifra4, int& impares);
void calculaColor(int pares, int impares, int& rojos, int& azules, int& verdes);

int main() {
    int year;
    int cifra1 = 0, cifra2 = 0, cifra3 = 0, cifra4 = 0;
    int pares, impares;
    int rojos, verdes, azules;
    int intentos, validos;
    char repetir;
    
    do {
    
    obtieneAnyo(year, intentos);
    sumaCifrasPares(year, cifra1, cifra2, cifra3, cifra4, pares);
    sumaCifrasImpares(year, cifra1, cifra2, cifra3, cifra4, impares);
    calculaColor(pares, impares, rojos, azules, verdes);
    
    cout << "¿Quires continuar (s/n)? ";
    cin >> repetir;
    
    intentos++;
    validos++;    
    
    } while(repetir == 's');
    
    cout << "--------INFORME------------" << endl;
    cout << "Inentos totales: " << intentos << endl;
    cout << "Intentos válidos: " << validos << endl;
    cout << "Número de rojos: " << rojos << endl;
    cout << "Número de verdes: " << verdes << endl;
    cout << "Número de azules: " << azules << endl;

    return 0;
}

void obtieneAnyo(int& year, int& intentos) {
    
    cout << "Introduce el año de nacimiento: ";
    cin >> year;
    
    while(year < 1920 || year > 2022) {
        
        cout << "Fecha no válida.\nIntroduce un año válido: ";
        cin >> year;
        
        intentos++;
    }
}

int sumaCifrasPares(int year, int cifra1, int cifra2, int cifra3, int cifra4, int& pares) {
    cifra1 = 0;
    cifra2 = 0;
    cifra3 = 0;
    cifra4 = 0;
    pares = 0;
    
    cifra1 = year / 1000;
    cifra2 = (year % 1000) / 100;
    cifra3 = (year % 100) / 10;
    cifra4 = year % 10;
    
    if(cifra1 % 2 == 0) {
        pares++;
    } 
    
    if(cifra2 % 2 == 0) {
        pares++;
    } 
    
    if(cifra3 % 2 == 0) {
        pares++;
    }
    
    if(cifra4 % 2 == 0) {
        pares++;
    }
    
    return pares;
}

int sumaCifrasImpares(int year, int cifra1, int cifra2, int cifra3, int cifra4, int& impares) {
    cifra1 = 0;
    cifra2 = 0;
    cifra3 = 0;
    cifra4 = 0;
    impares = 0;
    
    cifra1 = year / 1000;
    cifra2 = (year % 1000) / 100;
    cifra3 = (year % 100) / 10;
    cifra4 = year % 10;
    
    if(cifra1 % 2 != 0) {
        impares++;
    } 
    
    if(cifra2 % 2 != 0) {
        impares++;
    } 
    
    if(cifra3 % 2 != 0) {
        impares++;
    }
    
    if(cifra4 % 2 != 0) {
        impares++;
    }
    
    return impares;
}

void calculaColor(int pares, int impares, int& rojos, int& azules, int& verdes) {
    rojos = 0;
    azules = 0;
    verdes = 0;
    
    if(pares == impares) {
        cout << "Tu color es el rojo" << endl;
        rojos++;
        
    } else if(pares > impares) {
        cout << "Tu color es el azul" << endl;
        azules++;
    
    } else if(pares < impares) {
        cout << "Tu color es el verde" << endl;
        verdes++;
    } 
}