#include <iostream>
#include<string>
#include "Categorias.h"
#include "Carrito.h"
#include "Checkout.h"

using namespace std;

void corazon(){
   int a, b, l= 12;
   for (a = l/2; a <= l; a = a+2) { 
      for (b = 1; b < l-a; b = b+2)
         cout<<" ";
      for (b = 1; b <= a; b++) 
         cout<<"*";
      for (b = 1; b <= l-a; b++) 
         cout<<" ";
      for (b = 1; b <= a-1; b++) 
         cout<<"*";
      cout<<"\n";
   }
   for (a = l; a >= 0; a--) { 
      for (b = a; b < l; b++) 
         cout<<" ";
      for (b = 1; b <= ((a * 2) - 1); b++)
         cout<<"*";
      cout<<"\n";
   }
}


int main(){

    Carrito carritoskz;

    Categorias categorias[5];

    Categorias Bebidas("Bebidas-skzoo");
    Categorias Pasteleria("Pasteleria-skzoo");
    Categorias Skooz("Skooz");
    Categorias Merch("Merch");
    Categorias Albumes("Albumes");


    //Bebidas
    Productos BangBerry("Bang-Berry", 76);
    Productos AmeeLK("Amee-Lee Know", 76);
    Productos OinkOink("Pigunny Latte", 76);
    Productos HMITS("How much is this Smothie", 76);
    Productos MCSHSD("Mint Choco Smothie Han", 76);
    Productos Happiness("Happiness", 76);
    Productos BowWow("Green Grape 'Woof' Ade", 76);
    Productos BBMac("Babby Bread Macchiato", 76);

    //Pasteleria 
    Productos Cheescake("Quokka-Cheescake", 79);
    Productos Brownie("BrownieLix", 79);
    Productos IceCream("IceCreaaaaam", 30);
    Productos Macaron("Macaron", 30);
    Productos Pancakes("MessPancakes", 60);
    Productos Galletas("CookieHin", 50);
    Productos Pan("BabyBread", 50);
    Productos Cake("Skz-Cake", 200);

    //Skzoo
    Productos Wolfchan("Wolfchan", 1225);
    Productos Leebit("Leebit", 1225);
    Productos Dwaekki("Dwaekki", 1225);
    Productos Jirnet("Jirnet", 1225);
    Productos HanQuokka("Han Quokka", 1225);
    Productos BbokAri("BbokAri", 1225);
    Productos PuppyM("PuppyM", 1225);
    Productos FoxlNy("Foxl-Ny", 1225);

    //Merch 
    Productos Sudadera("Sudadera logo SKZ", 1125);
    Productos Lightstick("Lightstick", 1300);
    Productos LomoCards("LomoCards", 300);
    Productos MiniLS("Mini Lightstick", 799);
    Productos Llavero("Llavero", 500);
    Productos Photocard("Set Photocard", 699);

    
    //Albumes 
    Productos Mixtape("Mixtape", 599);
    Productos IamNot("I am not", 599);
    Productos IamWho("I am who?", 599);
    Productos MIROH("Clé 1: MIROH", 599);
    Productos YellowWood("Clé 2: Yellow Wood", 799);
    Productos Levanter("Clé: Levanter", 799);
    Productos GoLive("Go Live", 699);
    Productos InLife("In Life", 699);
    Productos NoEasy("No Easy", 999);
    Productos CEVL("Christmas EveL", 799);



    Bebidas.AgregarProducto(BangBerry, 0);
    Bebidas.AgregarProducto(AmeeLK, 1);
    Bebidas.AgregarProducto(OinkOink, 2);
    Bebidas.AgregarProducto(HMITS, 3);
    Bebidas.AgregarProducto(MCSHSD, 4);
    Bebidas.AgregarProducto(Happiness, 5);
    Bebidas.AgregarProducto(BowWow, 6);
    Bebidas.AgregarProducto(BBMac, 7);

    Pasteleria.AgregarProducto(Cheescake, 0);
    Pasteleria.AgregarProducto(Brownie, 1);
    Pasteleria.AgregarProducto(IceCream, 2);
    Pasteleria.AgregarProducto(Macaron, 3);
    Pasteleria.AgregarProducto(Pancakes, 4);
    Pasteleria.AgregarProducto(Galletas, 5);
    Pasteleria.AgregarProducto(Pan, 6);
    Pasteleria.AgregarProducto(Cake, 7);

    Skooz.AgregarProducto(Wolfchan, 0);
    Skooz.AgregarProducto(Leebit, 1);
    Skooz.AgregarProducto(Dwaekki, 2);
    Skooz.AgregarProducto(Jirnet, 3);
    Skooz.AgregarProducto(HanQuokka, 4);
    Skooz.AgregarProducto(BbokAri, 5);
    Skooz.AgregarProducto(PuppyM, 6);
    Skooz.AgregarProducto(FoxlNy, 7);

    Merch.AgregarProducto(Sudadera, 0);
    Merch.AgregarProducto(Lightstick, 1);
    Merch.AgregarProducto(LomoCards, 2);
    Merch.AgregarProducto(MiniLS, 3);
    Merch.AgregarProducto(Llavero, 4);
    Merch.AgregarProducto(Photocard, 5);

    Albumes.AgregarProducto(Mixtape, 0);
    Albumes.AgregarProducto(IamNot, 1);
    Albumes.AgregarProducto(IamWho, 2);
    Albumes.AgregarProducto(MIROH, 3);
    Albumes.AgregarProducto(YellowWood, 4);
    Albumes.AgregarProducto(Levanter, 5);
    Albumes.AgregarProducto(GoLive, 6);
    Albumes.AgregarProducto(InLife, 7);
    Albumes.AgregarProducto(NoEasy, 8);
    Albumes.AgregarProducto(CEVL, 9);
    
    int h=1;

    while (h>0){

        int Eleccion = 0;
        corazon();
        cout<<"Bienvenid@ al a Cafetería Birth-Stay"<<endl<<"¿Que deseas el día de hoy?"<<endl<<"1) Ver Categorias\n2) Tu Carrito\n3) Checkout\n4) Salir <3 "<<endl;
        cin>> Eleccion;
        if (Eleccion==1){
                cout<<"Elige la categoria que desees: "<<endl;
                cout<<"1) Bebidas"<<endl;
                cout<<"2) Pasteleria "<<endl;
                cout<<"3) Skooz "<<endl;
                cout<<"4) Merch "<<endl;
                cout<<"5) Albumes "<<endl;

                int CatSel;
                cin>> CatSel;
            
                if (CatSel == 1 ){
                cout<<"Estos son los productos de la cateorgía que elegiste: "<<endl;
                Bebidas.ImprimeProductos();
                }
                else if (CatSel == 2){
                cout<<"Estos son los productos de la cateorgía que elegiste: "<<endl;
                Pasteleria.ImprimeProductos();
                }
                else if (CatSel== 3){
                cout<<"Estos son los productos de la cateorgía que elegiste: "<<endl;
                Skooz.ImprimeProductos();
                }
                else if (CatSel==4){
                cout<<"Estos son los productos de la cateorgía que elegiste: "<<endl;
                Merch.ImprimeProductos();
                }
                else if (CatSel==5){
                cout<<"Estos son los productos de la cateorgía que elegiste: "<<endl;
                Albumes.ImprimeProductos();
                }
                else{
                    cout<<"Categotia seleccionada incorrecta"<<endl;
                }
                
                cout<<"¿Cuantos productos deseas agregar?: "<<endl;
                int numprod;
                cin>> numprod;
        
                for (int i =0; i<numprod; i++){
                    cout<<"¿Que producto deseas agregar?: "<<endl;
                    int PAA;
                    cin>> PAA;
                    carritoskz.AgregarProductos(categorias[CatSel].PosProductos(PAA), i);
                    carritoskz.ImprimeCarrito();
                    cout<<"Producto agregado"<<endl;
        
                }
                
        }
        else if(Eleccion == 2){
                for (int i=1; i<11; i++){
                    cout<<"Producto "<<i<<" "<<endl;
                    carritoskz.ImprimeCarrito();
                }
                cout<<"El total es: "<<carritoskz.CalcularPercioFinal()<<endl;

                cout<<"Deseas realizar tu checkout?\n1) Si\n2) Salir"<<endl;
                int res;
                cin>>res; 
                if (res==1){
                    cout<<"Cual sería tu forma de pago?\n1) Tarjeta\n2) Paypal\n3) Oxxo Pay"<<endl;
                    int pago;
                    cin>>pago;
                    if (pago== 1){
                        string tarjeta;
                        string cvv;
                        string nombre;
                        string fecha;

                        cout<<"Nombre: "<<endl;
                        cin>>nombre;

                        cout<<"cvv: "<<endl;
                        cin>>cvv;

                        cout<<"Numero Tarjeta: "<<endl;
                        cin>>tarjeta;

                        cout<<"Fecha Expiración: "<<endl;
                        cin>>fecha;

                        Checkout Tar1;
                        Tar1.PagoTarjeta(tarjeta, cvv, nombre, fecha);
                    }
           
                    else if (pago == 2){
                        string usuario;
                        string contrasena;

                        cout<<"Usuario: "<<endl;
                        cin>>usuario;

                        cout<<"Contraseña: "<<endl;
                        cin>>contrasena;

                        Checkout PayPal1;
                        PayPal1.PagoPayPal(usuario, contrasena);
                    }

                   else if (pago == 3){
                        string numRE;
                        cout<<"Numero del recibo: "<<endl;
                        cin>>numRE;

                        Checkout OxxoPay1;
                        OxxoPay1.PagoOxxoPay(numRE);

                    }
                    else{
                        return 0;
                    }
                }
                else{
                    return 0;
                }    
        }

        else if (Eleccion == 3){
                for (int i=1; i<11; i++){
                    cout<<"Producto "<<i<<" "<<endl;
                    carritoskz.ImprimeCarrito();
                }
                cout<<"El total es: "<<carritoskz.CalcularPercioFinal()<<endl;

                cout<<"Cual sería tu forma de pago?\n1) Tarjeta\n2) Paypal\n3) Oxxo Pay"<<endl;
                int pago;
                cin>>pago;
                
                if (pago== 1){
                    string tarjeta;
                    string cvv;
                    string nombre;
                    string fecha;

                    cout<<"Nombre: "<<endl;
                    cin>>nombre;

                    cout<<"cvv: "<<endl;
                    cin>>cvv;

                    cout<<"Numero Tarjeta: "<<endl;
                    cin>>tarjeta;

                    cout<<"Año de Expiración: "<<endl;
                    cin>>fecha;

                    Checkout Tar1;
                    Tar1.PagoTarjeta(tarjeta, cvv, nombre, fecha);
                }
           
                else if (pago == 2){
                    string usuario;
                    string contrasena;

                    cout<<"Usuario: "<<endl;
                    cin>>usuario;

                    cout<<"Contraseña: "<<endl;
                    cin>>contrasena;

                    Checkout PayPal1;
                    PayPal1.PagoPayPal(usuario, contrasena);
                }

                else if (pago == 3){
                    string numRE;

                    cout<<"Numero del recibo: "<<endl;
                    cin>>numRE;

                    Checkout OxxoPay1;
                    OxxoPay1.PagoOxxoPay(numRE);
                }
                else{
                    return 0;
                }

     
        }
        else{
            h=-1;
        }
    }

    return 0;
}