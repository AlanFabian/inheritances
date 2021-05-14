#include<iostream>
#include<string.h>
//Clase padre

 class Vehiculos{
     int ruedas,pasajeros;
     public:

     //Constructores
     Vehiculos();
     Vehiculos();
     //Destructor
     ~Vehiculos();
        void set_ruedas(int num){ruedas=num;
        }
        int get_ruedas(){
            return ruedas;
        }
        void set_pasajeros(int num){
            pasajeros = num;

        }
        int get_pasajeros(){
            return pasajeros;
        }
     private:
     
 };
//Clase de camiones 
class camion:public Vehiculos{
    int carga;
    public:
    //Constructores
    camion();
    camion(int);

    void set_carga(int size){
        carga = size;
    }
    int get_carga(){
        return carga;
    }
    void mostrar();
    private:

};

enum tipo {carro,van,camioneta};

//Clase de automoviles
class automoviles:public Vehiculos{
enum tipo tipo_de_carro;
public:
void set_tipo(tipo t){tipo_de_carro=t;}
enum tipo get_tipo(){return tipo_de_carro;};
void mostrar();


};

