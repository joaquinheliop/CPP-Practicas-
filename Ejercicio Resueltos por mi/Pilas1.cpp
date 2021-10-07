#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&pila, int n)
{

    Nodo *nuevo_nodo = new Nodo(); // reservo memoria par aun nuevo nodo
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

int main()
{

    Nodo *pila = NULL;
    int n1, n2;

    cout << "Escriba un numero: ";
    cin >> n1;
    agregarPila(pila, n1);

    cout << "Escriba otro numero: ";
    cin >> n1;
    agregarPila(pila, n2);

    getch();
    return 0;
}
