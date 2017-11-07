#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

template <class T>
void mostrarlista(Lista<T>l){
    for(int i = 0; i<l.getTamanio()-1; i++){
        cout << l.getDato(i)<<endl;
    }
}
int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;

    int n, x, pos;
    Lista<int> l;

    cout<<"ingrese cant de elementos de la lista"<<endl;
    cin>>n;

    for (int i=0; i<n; i++){
        cout<<"ingrese num de posicion"<< i << endl;
        cin>> x;
        l.insertar(i,x);
    }

    cout<<"lista:"<<endl;
    mostrarlista(l);

    cout<<"posicion a elimina:";
    cin>>pos;
    cout<<endl;
    l.remover(pos);
    
    cout<<"lista:"<<endl;
    mostrarlista(l);
    
    return 0;
}