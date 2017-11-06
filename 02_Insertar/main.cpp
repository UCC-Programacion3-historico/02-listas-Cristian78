#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

template<class T>
void mostrarlista(Lista<T> l){
    for (int i = 0; l.getTamanio(); i++){
        cout<<l.getDato(i)<<endl;
    }
}

int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;

    Lista<float> l;
    int a;
    float x;

    do{
        cout<< "1) Insertar primero"<<endl;
        cout<< "2) Insertar al medio"<<endl;
        cout<< "3) Insertar al final"<<endl;
        cout<< "4) Mostrar lista"<<endl;
        cout<< "5) Salir"<<endl;
        cout<< "Ingrese opcion que desea y presiones enter:"<<endl;
        cin>> a;
        cout<<endl;

        if(a!=4 && a!=5){
            cout<< "Ingrese dato a insertar: ";
            cin>>x;
            cout<<endl;
        }
        switch (a){
            case 1:
                l.insertarPrimero(x);
                break;
            case 2:
                l.insertar(l.getTamanio()/2,x);
                break;
            case 3:
                l.insertarUltimo(x);
                break;
            case 4:
                mostrarlista(l);
                break;
            default:
                break;
        }
    }while(a!=5);

    return 0;
}