#include <iostream>
#include<string>
#include "Carrito.h"
using namespace std;

Carrito:: Carrito(){

}
void Carrito:: AgregarProductos(Productos producto, int pos){
    productos[pos]=producto;
   
}

double Carrito:: CalcularPercioFinal(){
    int total = 0;
    for (int i=0;i<10;i++){
        int precio = productos[i].GetPrecio();
        total = precio;
    }
    
    return total;
}

void Carrito:: ImprimeCarrito(){
    for (int i=0;i<1;i++){
        productos[i].ImprimeProducto();
    }

}

Carrito:: ~Carrito(){

}

