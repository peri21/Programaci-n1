#include<iostream>
#include<time.h>    //localtime, NULL
#include<iomanip>   //setw()
using namespace std;

#define KESPACIOS 15     //Número de espacios
#define KMAX 50          //Número máximo de pájaros
#define KNOMBRE 20      //Número máximo de caracteres para el nombre

typedef char TNombre [KNOMBRE]; 

typedef struct {
    int dia;
    int mes;
    int anyo;
    
} TFecha;

typedef struct {    
    TNombre nombre;
    TFecha fecha;
    
} TMascota;

typedef TMascota TCanarios [KMAX];

void addCanarios(TCanarios& canarios, int& tam);
void comprobarVitaminas(TCanarios canarios, int tam);
void listaCanarios(TCanarios canarios, int tam);

int main() {
    int opcion, tam = 4;
    
    TCanarios canarios = {
        
        {"Piopio", {1, 1, 2015}},
        {"Lina", {22, 12, 2018}},
        {"Trompetilla", {5, 3, 2017}},
        {"Bolita", {5, 3, 2017}},
    };
    
    do {
        cout << "1. DAR DE ALTA UN CAMINO" << endl;
        cout << "2. COMPROBAR VITAMINAS" << endl;
        cout << "3. LISTADO" << endl;
        cout << "4. SALIR" << endl;
        cout << "OPCION...";
        cin >> opcion;
        cin.get();
        cout << "-------------------------" << endl;
        
        switch(opcion) {
            case 1:
                addCanarios(canarios, tam);
                break;
                
                
            case 2:
                comprobarVitaminas(canarios, tam);
                break;
                
                
            case 3:
                listaCanarios(canarios, tam);
                break;
                
                
            case 4:
                //Salir del bucle directamente
                break;
                
                
            default:
                cout << "Opcion inexistente. Try again" << endl; 
                break;
        }
    
        cout << "---------------------------" << endl;
    
    } while(opcion != 4);
    
    return 0;
}

void addCanarios(TCanarios& canarios, int& tam) {
    tam++;
    
    if(tam == KMAX + 1) {
        
        cout << "CANTIDAD MÁXIMA DE CANARIOS ALCANZADA" << endl;
        
    } else {
        
        for(int i = tam; i < tam + 1; i++) {
        
            cout << "NOMBRE DEL CANARIO...";
            cin >> canarios[i].nombre;
            
            cout << "FECHA DE ADQUISICIÓN" << endl;
                
            do {
                cout << setw(KESPACIOS) << "DIA...";
                cin >> canarios[i].fecha.dia;
                
            } while(canarios[i].fecha.dia < 1 || canarios[i].fecha.dia > 31);
    
            
            do {
                cout << setw(KESPACIOS) << "MES...";
                cin >> canarios[i].fecha.mes;
                
            } while(canarios[i].fecha.mes < 1 || canarios[i].fecha.mes > 12);
    
            do {
                cout << setw(KESPACIOS) << "ANYO..";
                cin >> canarios[i].fecha.anyo;
                
            } while(canarios[i].fecha.anyo < 2010 || canarios[i].fecha.anyo > 2021);
        }
    }
}

void comprobarVitaminas(TCanarios canarios, int tam) {
    
    time_t t;
    struct tm *tlocal;
    int dia, mes;
    
    t = time(NULL);
    tlocal = localtime(&t);
    dia = tlocal -> tm_mday;
    mes = tlocal -> tm_mon + 1;
    
    cout << "TOCA DAR VITAMINAS A: " << endl;
    
    for(int i = 0; i < tam; i++) {
    
        if(dia == canarios[i].fecha.dia && mes == canarios[i].fecha.mes) {
        
            cout << canarios[i].nombre << endl;
            
        } else {
            
            cout << "A ningún canario le tocan vitaminas" << endl;
        }
    }
}

void listaCanarios(TCanarios canarios, int tam) {
    
    for(int i = 0; i < tam; i++) {
        
        cout << i + 1 << ". " << canarios[i].nombre << " ";
        cout << canarios[i].fecha.dia << "-" << canarios[i].fecha.mes << "-" << canarios[i].fecha.anyo << endl;
    }
}