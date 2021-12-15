#include <iostream>
#include <cstring>
using namespace std;

#define KNOMBRE 10
typedef char TNombre [KNOMBRE];

#define KTAMANO 40
typedef int TLongitud [KTAMANO];

typedef struct{
	TNombre nombre;
	int numCapturas;
	TLongitud longitud;


}TPez;

#define KAMIGOS 50
typedef TPez TAmigos [KAMIGOS];

// prototipos
void leerPescador(TPez &pescador);
void nuevoPescador(TAmigos amigos, int &numPescadores);
void nuevaCaptura(TAmigos amigos, int &numPescadores);
void imprimirPescador(TPez amigo);
void imprimirPescadores(TAmigos amigos, int numPescadores);
void masPeque(TAmigos amigos, int numPescadores);


// main (menú)
int main(){
	int opcion;
	int numPescadores = 2;

	TAmigos amigos = {

                {"Pole", 2, {15, 4}},
                {"Vampi", 1, 35}
	};
	
	do{

	cout << "1. Dar de alta una captura " << endl;
	cout << "2. Listado de pescadores " << endl;
	cout << "3. Mostrar nombre del pescador " << endl;
	cout << "4. Salir " << endl;
	cout << "Opción: ";
	cin >> opcion;
	cin.get();

	cout << "*********************************************" << endl;
		switch(opcion){
			case 1:
				nuevaCaptura(amigos, numPescadores);
				break;
			case 2:
				imprimirPescadores(amigos, numPescadores);
				break;
			case 3:
				masPeque(amigos, numPescadores);
				break;	
	
			case 4:
                                //Salir del programa
				break;
			default:
				cout << "Error en opcion no sax " << endl;
				break;

		}
		
	} while(opcion != 4);

	return 0;
}

void leerPescador(TPez &pescador) { //esto es para meterlo en el siguiente modulo saxxxx
    
	cout << "Nombre: ";
	cin >> pescador.nombre;	// no uso el cin.getline pq dice q se llaman por alias sin espacios en blanco
	cin.get();
        
	cout << "Longitud captura: ";
	cin >> pescador.longitud[0];
        
	pescador.numCapturas++;
}


void nuevoPescador(TAmigos amigos, int &numPescadores){		//esto se mete en el tercer modulo saxx y es para el caso 1 del menu
	
    if(numPescadores == KAMIGOS) {
		
        cout << "Lista de pescadores llena. " << endl;		

    } else{
		
        leerPescador(amigos[numPescadores]);
		
        numPescadores++;
    }
}

void nuevaCaptura(TAmigos amigos, int &numPescadores){	// caso 1 del menu saxiano
	TNombre buscado;	
	int pos, nuevoPescado, posPescado;
        
	pos = -1;	// esto me digo el de programasao q es un centinela y q si este valor 
			//se aguanta en el for entonces sabemos q no lo hemos encontrao

	cout << "Introduce el nombre del pescador: ";
	cin.getline(buscado, KNOMBRE);

	for(int i = 0; i < numPescadores && pos == -1; i++) {
            
		if(strcmp(buscado, amigos[i].nombre) == 0) {
			
                    pos = i;
		}
	}

		if(pos == -1) {
                    
			cout << buscado << " NO se encuentra entre los pescadores todavía " << endl;
			// como no está leído el pescador pues lo leo ahora y pido la primera longitud
			nuevoPescador(amigos, numPescadores);
			
		} else {
                    
			if(amigos[pos].numCapturas == KTAMANO) {
                            
                            cout << "Lista de pescados llena. " << endl;
                                
			} else {
                            
				do {
                                    cout << "Introduce la longitud del pescao: " << endl;
                                    cin >> nuevoPescado;
                                    cin.get();
                                        
				}while(nuevoPescado <= 0);
				// pos => amigo seleccionado
				// nuevoPescado => longitud que quiero meter
				// posPescado => es la cantidad de longitudes que he metido + 1
				posPescado = amigos[pos].numCapturas;
				amigos[pos].longitud[posPescado] = nuevoPescado;
				amigos[pos].numCapturas++;
			}
		}
}

void imprimirPescador(TPez amigo) {
    
	cout << amigo.nombre << " " << amigo.numCapturas << " capturas: ";
        
	for(int i = 0; i < amigo.numCapturas; i++) {
            
		cout << amigo.longitud[i] << " ";
	}
	
	cout << "\n";
}

void imprimirPescadores(TAmigos amigos, int numPescadores){
    
	if(numPescadores == 0) {	 // cosa que no pasa pq en el main ya hemos declarado 2
            
		cout << "Aún no hay pescadores " << endl;
                
	} else {
            
		for(int i = 0; i < numPescadores; i++) {
                    
			imprimirPescador(amigos[i]);
		}

	}

}

void masPeque(TAmigos amigos, int numPescadores){
	int menor;
	int pos;

	menor = 4; // el menor ahora mismo es de Pole (en el main)
        
	for(int i = 0; i < numPescadores; i++) {
            
		for(int j = 0; j < amigos[i].numCapturas; j++) {
                    
			if(amigos[i].longitud[j] <= menor) {
                            
				menor = amigos[i].longitud[j];
				pos = i;
			}
		}
	}

	cout << "El pescado más pequeño mide " << menor << " y es de " << amigos[pos].nombre << ". " << endl;	// mamadisimo
}