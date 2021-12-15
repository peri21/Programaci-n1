#include<iostream>
#include<cstring>
using namespace std;

#define KNOMBRE 50
#define KOBJETOS 50

typedef char TNombre [KNOMBRE];

typedef struct {
    TNombre nombre;
    float precio;
    
} TMercadillo;

typedef TMercadillo TObjetos [KOBJETOS];

void mostrarMenu();
void altaObjeto(TObjetos& objeto, int& numObjetos);
void bajaObjeto(TObjetos& objeto, int& numObjetos);
void modificarPrecio(TObjetos& objeto, int numObjetos);

int main() {
    TObjetos objeto;
    int opcion, numObjetos = 0; 
    
    do {
        mostrarMenu();
        cin >> opcion;
    
        switch(opcion) {
            
            case 1: 
                    altaObjeto(objeto, numObjetos);
                    cout << "\n";
                    break;
                    
            case 2: 
                    bajaObjeto(objeto, numObjetos);
                    cout << "\n";
                    break;
                    
            case 3: 
                    modificarPrecio(objeto, numObjetos);
                    cout << "\n";
                    break;
                    
            case 4: 
                    //Salir del programa
                    break;
                    
            default: 
                    cout << "\nOPCIÓN NO VÁLIDA\n" << endl;
                    break;
        }
        
    } while(opcion != 4);
    
    return 0;
}

void mostrarMenu() {
    
    cout << "Mercadillo de Lucas" << endl;
    cout << "*********************" << endl;
    cout << "1. Alta de objeto" << endl;
    cout << "2. Baja de objeto" << endl;
    cout << "3. Modificación del precio de un objeto" << endl;
    cout << "4. Salir" << endl;
    cout << "Opción (1..4)? ";
}

void altaObjeto(TObjetos& objeto, int& numObjetos) {
    char continuar;
    
        do {
            cout << "Nombre del objeto: ";
            cin.ignore();
            cin.getline(objeto[numObjetos].nombre, KNOMBRE, '\n');
    
            cout << "Precio: ";
            cin >> objeto[numObjetos].precio;
    
            numObjetos++;
            
            cout << "¿Quieres introducir otro objeto(s/n)? ";
            cin >> continuar;
    
        } while(continuar == 's');
}

void bajaObjeto(TObjetos& objeto, int& numObjetos) {
    TNombre buscar;
    char vendido;
    
    cout << "Nombre del objeto vendido: ";
    cin.ignore();
    cin.getline(buscar, KNOMBRE, '\n');
        
    for(int i = 0; i < numObjetos; i++) {
    
        if(strcmp(buscar, objeto[i].nombre) == 0) {
            
            cout << "Precio: " << objeto[i].precio << endl;
        
            cout << "¿Confirmar venta (s/n): ";
            cin >> vendido;
    
            if(vendido == 's') {
        
                numObjetos--;
            }
        }
    }   
}

void modificarPrecio(TObjetos& objeto, int numObjetos) {
    TNombre buscar;
    
    cout << "Nombre del objeto a modificar: ";
    cin.ignore();
    cin.getline(buscar, KNOMBRE, '\n');
        
    for(int i = 0; i < numObjetos; i++) {
        
        if(strcmp(buscar, objeto[i].nombre) == 0) {
                
            cout << "Precio: " << objeto[i].precio << endl;
            
            cout << "Nuevo precio: ";
            cin >> objeto[i].precio;
                
            cout << "El precio se ha actualizado\n" << endl;
        }
    }
}
