#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    int numeros[10], *dir_numeros;

    for (int i = 0; i < 10; i++) {
     
     cout<<"Digite el numero ["<<i<<"]: ";
     cin>>numeros[i];

    }

    dir_numeros = numeros;

    for (int i = 0; i < 10; i++) {
       if (*dir_numeros%2 == 0) {
           cout<<"El numero: "<<*dir_numeros<<" es par"<<endl;
           cout<<"Posicion: "<<dir_numeros<<endl;
       } else {
           cout<<"El numero: "<<*dir_numeros<<" es impar"<<endl;
           cout<<"Posicion: "<<dir_numeros<<endl;
       }
       dir_numeros++;//Como es un puntero int se incremente de 4 en 4
    }
    

    getch();
    return 0;
}
