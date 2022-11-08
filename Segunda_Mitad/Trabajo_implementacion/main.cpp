#include <iostream>
#include "DynamicIntArray.h"

using namespace std;

int main() {
    // IMPLEMENTACION DE FUNCION REMOVE DE LA CLASE DYNAMICINTARRAY
    
    int arreglo[] = {1, 3, 5, 7};
    
    DynamicIntArray da(arreglo, 4);
    cout << da.getSize() << endl;
    da.print();
    da.push_back(9);
    da.print();
    da.insert(2, 1);
    da.print();
    da.remove(1);

    // IMPLEMENTACION DE CLASES 

    return 0;

}