#ifndef CARRITO_DEFINED
#define CARRITO_DEFINED
#include <iostream>
#include<string>
#include "Categorias.h"
using namespace std;


class Carrito{
    private:
        Productos productos[10];

    public:
        Carrito();
        void AgregarProductos(Productos producto, int pos);
        double CalcularPercioFinal();
        void ImprimeCarrito();
        ~Carrito();

};
#endif
