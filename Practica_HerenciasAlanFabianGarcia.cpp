/*Alan de Jesus Fabian Garcia 
20310339
9 de mayo de 2021 
*/
#include <iostream>
#include<string.h>
#include "Herencias_Vehiculos.h"
using namespace std;
int opc;
int VehiOpcion;
int main()
{
    camion cami;
    int ruedas,pasajeros,modelo;
    char matricula[50];
    int carga;
    char marca[50];

    
    do
    {
        cout<<"Bienvenido al sistema "<<endl<<"Eliga la opcion que desea utilizar"<<endl<<"1)Ingresar Registros"<<endl<<"2)Mostrar registros"<<endl<<"3)Borrar registro"<<endl<<"4)Salir"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1:
        //Aqui va la referencia al objeto 
        cout<<endl<<"Introduce el tipo de vehiculo del que quieres hacer un registro"<<endl<<"1)Camion \n 2) Carro \n 3)van \n 4)Camioneta"<<endl;
        cin>>VehiOpcion;
        switch (VehiOpcion)
        {
        case 1:
        cout<<"Ingrese los datos que se le piden a continuacion"<<endl;
        cout<<"Numero de ruedas del Camion"<<endl;
        cin>>ruedas;
        cami.set_ruedas(ruedas);
        cout<<"Numero de pasajeros del Camion"<<endl;
        cin>>pasajeros;
        cami.set_pasajeros(pasajeros);
        cout<<"Ingrese la matricula del Camion"<<endl;
        cin>>matricula;
        cami.set_matricula(matricula);
        cout<<"Ingrese la capacidad de carga del Camion mt/3"<<endl;
        cin>>carga;
        cami.set_carga(carga);
         cout<<"Ingrese la marca el Camion"<<endl;
        cin>>marca;
        cami.set_marca(marca);
        cout<<"Ingrese el modelo del Camion (año) "<<endl;
        cin>>modelo;
        cami.set_modelo(modelo);
        break;
        
        case 2:
        cout<<"Ingrese los datos que se le piden a continuacion"<<endl;
        cout<<"Numero de ruedas del Carro"<<endl;
        cin>>ruedas;
        cami.set_ruedas(ruedas);
        cout<<"Numero de pasajeros del Carro"<<endl;
        cin>>pasajeros;
        cami.set_pasajeros(pasajeros);
        cout<<"Ingrese la matricula del Carro"<<endl;
        cin>>matricula;
        cami.set_matricula(matricula);
        cout<<"Ingrese la capacidad de carga del Carro mt/3"<<endl;
        cin>>carga;
        cami.set_carga(carga);
        cout<<"Ingrese la marca el carro"<<endl;
        cin>>marca;
        cami.set_marca(marca);
        cout<<"Ingrese el modelo del carro (año) "<<endl;
        cin>>modelo;
        cami.set_modelo(modelo);
        break;
        
        case 3:
        cout<<"Ingrese los datos que se le piden a continuacion"<<endl;
        cout<<"Numero de ruedas del Van"<<endl;
        cin>>ruedas;
        cami.set_ruedas(ruedas);
        cout<<"Numero de pasajeros del Van"<<endl;
        cin>>pasajeros;
        cami.set_pasajeros(pasajeros);
        cout<<"Ingrese la matricula del Van"<<endl;
        cin>>matricula;
        cami.set_matricula(matricula);
        cout<<"Ingrese la capacidad de carga del Van mt/3"<<endl;
        cin>>carga;
        cami.set_carga(carga);
        cout<<"Ingrese la marca el Van"<<endl;
        cin>>marca;
        cami.set_marca(marca);
        cout<<"Ingrese el modelo de la van (año) "<<endl;
        cin>>modelo;
        cami.set_modelo(modelo);
        break;
        
        case 4:
        cout<<"Ingrese los datos que se le piden a continuacion"<<endl;
        cout<<"Numero de ruedas del Camioneta"<<endl;
        cin>>ruedas;
        cami.set_ruedas(ruedas);
        cout<<"Numero de pasajeros del Camioneta"<<endl;
        cin>>pasajeros;
        cami.set_pasajeros(pasajeros);
        cout<<"Ingrese la matricula del Camioneta"<<endl;
        cin>>matricula;
        cami.set_matricula(matricula);
        cout<<"Ingrese la capacidad de carga del Camioneta mt/3"<<endl;
        cin>>carga;
        cami.set_carga(carga);
        cout<<"Ingrese la marca de la  camioneta"<<endl;
        cin>>marca;
        cami.set_marca(marca);
        cout<<"Ingrese el modelo de la camioneta (año) "<<endl;
        cin>>modelo;
        cami.set_modelo(modelo);
        
        break;
        
        default:
            cout<<endl<<"Algo salio mal"<<endl;
        break;
        }

        
          
        break;

        case 2:
        //Mostrar
        cout<<endl<<"Los datos del objeto son: "<<endl;
        cout<<endl<<"Numero de ruedas: "<<cami.get_ruedas();
        cout<<endl<<"Numero de pasajeros: "<<cami.get_pasajeros();
        cout<<endl<<"Matricula : "<<cami.get_matricula();
        cout<<endl<<"Capacidad de carga: "<<cami.get_carga();
        cout<<endl<<"Marca: "<<cami.get_marca();
        cout<<endl<<"Modelo (año): "<<cami.get_modelo();
        cout<<endl;

        break;
        case 3:
        //Borrar
        cout<<endl<<"Los datos seran borrados: "<<endl;
        cami.set_carga(0);
        cami.set_ruedas(0);
        cami.set_pasajeros(0);
        cami.set_matricula("Vacio");
        cami.set_carga(0);
        cami.set_modelo(0);
        //Mostrar que se han borrado los datos 
        cout<<endl<<"Numero de ruedas: "<<cami.get_ruedas();
        cout<<endl<<"Numero de pasajeros: "<<cami.get_pasajeros();
        cout<<endl<<"Matricula : "<<cami.get_matricula();
        cout<<endl<<"Capacidad de carga: "<<cami.get_carga();
        cout<<endl<<"Modelo (año): "<<cami.get_modelo();
        cout<<endl;
        




        break;
        
        default:
        cout<<"Algo salio mal :c "<<endl;
            break;
        }
    } while (opc!=4);

    

    return 0;

}

