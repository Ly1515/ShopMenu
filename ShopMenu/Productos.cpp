#include <iostream>
#include<string>
#include "Productos.h"
using namespace std;

Productos:: Productos(){
    this->nombre="Sin nombre";
    this->precio=0;

}
Productos:: Productos(string nombre, int precio){
    this -> nombre = nombre;
    this -> precio = precio;

}
void Productos:: SetPrecio(int precio){
    this -> precio = precio;
}

void Productos:: SetNombre(string nombre){
    this -> nombre = nombre;

}

string Productos:: GetNombre(){
    return nombre;
}

int Productos:: GetPrecio(){
    return precio;
}

void Productos:: ImprimeProducto(){
    cout<<GetNombre()<<" Precio: "<<GetPrecio()<<endl;
}

Productos::~Productos(){
    
}

