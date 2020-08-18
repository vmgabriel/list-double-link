#include <iostream>
#include "archi.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    cout<<"Bienvenido"<<endl;
    
    Nodo<int> *nod;
    Lista<int> *lista;
    lista=new Lista<int>(2);
    
    nod=new Nodo<int>();
    nod->info=3;
    nod->sig=NULL;
    nod->ant=NULL;

    lista->insertar(nod);

    nod=new Nodo<int>();
    nod->info=5;
    nod->sig=NULL;
    nod->ant=NULL;
    
    lista->insertar(nod);

    nod=new Nodo<int>();
    nod->info=6;
    nod->sig=NULL;
    nod->ant=NULL;
    
    lista->insertar(nod);

    nod=new Nodo<int>();
    nod->info=21;
    nod->sig=NULL;
    nod->ant=NULL;
    
    lista->insertar(nod);

    nod=new Nodo<int>();
    nod->info=13;
    nod->sig=NULL;
    nod->ant=NULL;
    
    lista->insertar(nod);

    nod=new Nodo<int>();
    nod->info=66;
    nod->sig=NULL;
    nod->ant=NULL;
    
    lista->insertar(nod);

    int i=lista->cantelem();
    cout<<i<<endl;
    
    if (lista->borrar(1))
    {
	cout<<"Borrado satisfactoriamente"<<endl;
    }
    else
    {
	cout<<"Ha ocurrido un error al borrar"<<endl;
    }

    nod=new Nodo<int>();
    nod->info=13;
    nod->sig=NULL;
    nod->ant=NULL;

    if (lista->modificar(1,nod))
    {
	cout<<"Modificado satisfactoriamente"<<endl;
    }
    else
    {
	cout<<"Ha ocurrido un error al modificar o este no se modifico"<<endl;
    }

    int val=((lista->cantelem())-1);
    cout<<"Datos Seleccionados y Mostrados"<<endl;
    cout<<"[ ";
    while (val >= 0)
    {
	nod=lista->seleccionar(val);
	cout<<nod->info<<" ";
	val--;
    }
    cout<<"]"<<endl;
    
    i=lista->cantelem();
    cout<<i<<endl;
    
    return 0;
}
