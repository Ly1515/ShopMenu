#ifndef PRODUCTOS_DEFINED
#define PRODUCTOS_DEFINED
#include <iostream>
#include<string>
using namespace std;

class Productos{
        
    private:
        string nombre;
        int precio;
        
        
    public:
        Productos();
        Productos(string nombre, int precio);
        void SetNombre(string nombre);
        string GetNombre();
        int GetPrecio();
        void SetPrecio(int precio);
        void ImprimeProducto();
        ~Productos();

};

#endif