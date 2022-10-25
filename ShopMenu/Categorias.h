#ifndef CATEGORIAS_DEFINED
#define CATEGORIAS_DEFINED
#include <iostream>
#include<string>
#include "Productos.h"
#include <vector>
using namespace std;


class Categorias{

    private:
        string nombre;
        Productos productos[10];

    public:
        Categorias();
        Categorias(string nombre);
        void SetNombre(string nombre);
        string GetNombre();
        void AgregarProducto(Productos producto, int pos);
        void ImprimeProductos();
        Productos PosProductos(int pos);
        void ImprimeCategorias();
        ~Categorias();


};
#endif