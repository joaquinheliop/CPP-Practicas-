#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    int numeros[] = {1,2,3,4,5};
    int *dir_numeros;

    dir_numeros = numeros; //Le paso al puntero la direccion inicial de mi vector

    for (int i = 0; i < 5; i++) {
     
     cout<<"Elemento del vector ["<<i<<"]: "<<*dir_numeros++<<endl;//*dir_numeros++ me muestra el contenido incrementando el espacio de memoria necesario para mostrar el optro dato osea 4 bytes

    }


    getch();
    return 0;
}
