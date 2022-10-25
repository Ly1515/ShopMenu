#include <iostream>
#include<string>
#include "Checkout.h"
using namespace std;

Checkout:: Checkout(){

}

void Checkout:: PagoTarjeta(string tarjeta, string cvv, string nombre, string fecha){
    cout<<"Nombre: "<<nombre<<endl<<"Numero de tarjeta: "<< tarjeta<<endl<<"CVV: "<<cvv<<endl<<"Fecha Expiración: "<<fecha<<endl;
    cout<<"Pago Exitoso!!"<<endl<<"Se ha realizado su compra!!"<<endl;

}

void Checkout:: PagoPayPal(string usuario, string contrasena){
    cout<<"Usuario: "<<usuario<<endl;
    cout<<"Pago Exitoso!!"<<endl<<"Se ha realizado su compra!!"<<endl;

}

void Checkout:: PagoOxxoPay(string numRE){
    cout<<"Numero de Recibo: "<<numRE<<endl;
    cout<<"Pago no exitoso"<<endl;

}

Checkout:: ~Checkout(){

}
