#include<iostream>
using namespace std;

int main() {
    char calcetin;
    int num_b = 0, num_w = 0;
    
    cout << "Introduce un calcetín: ";
    cin >> calcetin;
    
    if(calcetin == 'B') {
        num_b = num_b + 1;
        
    } else if(calcetin == 'W') {
        num_w = num_w + 1;
        
    } else if(calcetin == '.') {
        cout << "SIN DATOS";
    
    }
    
    while(calcetin == 'B' || calcetin == 'W') {
        cout << "Introduce un calcetín: ";
        cin >> calcetin;
        
        if(calcetin == 'B') {
            num_b = num_b + 1;
        
        } else if(calcetin == 'W') {
            num_w = num_w + 1;
        
        }
    }
    
    if(num_b == 1 && num_w == 1) {
        cout << "PAREJA MIXTA";
        
    } else if(num_b > num_w) {
        cout << "BLANCO SOLITARO";
        
    } else if(num_b < num_w) {
        cout << "NEGRO SOLITARIO";
        
    } else if(num_b == num_w && num_b != 0) {
        cout << "EMPAREJADOS";
        
    }
    
    cout << "\n";
    
    return 0;
}