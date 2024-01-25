#include <iostream>

using namespace std;

enum Season {
    AUTUMN,
    WINTER,
    Spring,
    Summer,
};        

int main() {
        Season estacionActual = Spring;
    
    switch (estacionActual) {
    
    case AUTUMN:
     cout << "Es otoño";
    break;
    
    case WINTER:
        cout << "Es invierno";

    break;

    case Spring: 
        cout << "Es primavera";
    break;

    case Summer: 
        cout << "Es VERANO";
    break;
    
    }

    return 0;
 }

