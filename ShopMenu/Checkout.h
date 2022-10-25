#ifndef CHECKOUT_DEFINED
#define  CHECKOUT_DEFINED
#include <iostream>
#include<string>
#include "Carrito.h"
using namespace std;

class Checkout{
        
    private:
        string tarjeta;
        string cvv;
        string nombre;
        string fecha;
        string usuario;
        string contrasena;
        string numRE;


    public:
        Checkout();
        void SetTarjeta();
        void PagoTarjeta(string tarjeta, string cvv, string nombre, string fecha);
        void PagoPayPal(string usuario, string contrasena);
        void PagoOxxoPay(string numRE);
        ~Checkout();

};

#endif