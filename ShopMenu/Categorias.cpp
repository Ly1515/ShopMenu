#include <iostream>
#include<string>
#include "Categorias.h"
using namespace std;

Categorias:: Categorias(){
    this-> nombre= "Sin categoria";
}

Categorias:: Categorias(string nombre){
    this -> nombre = nombre;

}
void Categorias:: SetNombre(string nombre){
    this -> nombre = nombre;
}

string Categorias:: GetNombre(){
    return nombre;
}

void Categorias:: AgregarProducto(Productos producto, int pos){
    productos[pos]=producto;
}

void Categorias:: ImprimeProductos(){
    for (int i=0;i<10;i++){
        productos[i].ImprimeProducto();
    }
}

Productos Categorias:: PosProductos(int pos){
    return productos[pos];
}

void Categorias:: ImprimeCategorias(){
    cout<<"Categoria: "<<GetNombre()<<endl;
}

Categorias::~Categorias(){
    
}
