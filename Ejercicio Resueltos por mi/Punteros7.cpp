#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int nElementos, *elemento;

void pedirDatos()
{
    cout << "Digite el numero de elementos del arreglo: ";
    cin >> nElementos;

    elemento = new int[nElementos]; //Reservo el espacio de memoria para nElementos x int y le digo a mi puntero elemento la direccion de inicio de mi arreglo

    for (int i = 0; i < nElementos; i++)
    {

        cout << "Ingrese el elemento " << i + 1 << " del arreglo:";
        cin >> *(elemento + i); // es como poner elemento[i] pero aca lo hago con puntero
    }
}

void ordenarDatos(int *elemento, int nElementos)
{
    cout << "Digite el numero de elementos del arreglo: ";
    int aux;

    for (int i = 0; i < nElementos; i++)
    {
        for (int j = 0; j < nElementos; j++)
        {
            if (*(elemento + j) > *(elemento + j + 1))
            { // es lo mismo que hacer elementos[j]>elemetnos[j+1]
                aux = *(elemento + j);
                *(elemento + j) = *(elemento + j + 1);
                *(elemento + j + 1) = aux;
            }
        }
    }
}

void mostrarDatos(int *elemento, int nElementos){
    cout<<"Mostrando arreglo ordenado "<<endl;
    for (int i = 0; i < nElementos; i++)
    {
        cout<< *(elemento+i);
    }
    
}

int main()
{
    pedirDatos();
    ordenarDatos(elemento,nElementos);
    mostrarDatos(elemento, nElementos);

    delete[] elemento; //liobero la memoria de mi arreglo dinamico

    getch();
    return 0;
}
