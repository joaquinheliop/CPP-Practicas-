#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo
{
    int dato;        //el tipo de datoq ue guardo en la pila
    Nodo *siguiente; //el dato de la direccion del siguiente dato
};

void agregarPila(Nodo *&pila, int n)
{
    /*Funcion para agregar datos a mi pila pide dos parametros
    un dato tipo nodo por puntero y referencia y el dato que quiero guardar*/
    Nodo *nuevo_nodo = new Nodo(); //reservo memoria para un nuevo nodo
    nuevo_nodo->dato = n;          //guardo el dato pedido por parametro dentro de mi structura
    nuevo_nodo->siguiente = pila;  //le paso el primer dato a la pila NULL despues se va a ir completando con la direccion del dato
    pila = nuevo_nodo;             //le paso a la variable pila la direccion de la pila actual para que pueda crear la pila que sigue

    cout << "El elemento se agrego a la pila exitosamente" << endl;
}

void sacarPila(Nodo *&pila, int &n)
{
    Nodo *aux = pila; //creo variable aux de tipo nodo y le asigo el valor de pila
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}

int main()
{
    Nodo *pila = NULL;
    int dato;
    char resp;

    do
    {
        cout << "Digite un numero: ";
        cin >> dato;
        agregarPila(pila, dato);
        cout << "Desea agregar otro elemento S/N?" << endl;
        cin >> resp;

    } while (resp == 's' || resp == 'S');

    cout << "Sacando elementos de la pila" << endl;

    while (pila != NULL) //mientras que la pila no llegue a null osea que se quede sin elementos anda mostrandolos
    {
        sacarPila(pila, dato);
        if (pila != NULL)
        {
            cout << dato << " , ";
        }
        else
        {
            cout << ".";
        }
    }

    getch();
    return 0;
}
