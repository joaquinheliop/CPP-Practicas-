#include<iostream>
#include<conio.h>
#include<stdlib.h> // funcionan new y delete

using namespace std;

int numCalif, *calif;

void pedirNotas() {
    cout<<"Digite el numero de calificaciones: ";
    cin>>numCalif;

    calif = new int[numCalif]; //Reservo espacio para el array y le asigno a la variable puntero calif la primera posicion dememoria del array

    for (int i = 0; i < numCalif; i++) {
        cout<<"Ingrese una nota: ";
        cin>>calif[i];//hace un salto de 4 en 4 bytes
    }
    
}

void mostrarNotas(){
    cout<<"Notas del usuario: "<<endl;
    for (int i = 0; i < numCalif; i++) {
        cout<<"Nota "<<i+1<<": "<<calif[i]<<endl;
    }
    
}

int main() {

    pedirNotas();
    mostrarNotas();

    delete[] calif; //Libero la memoria reservada por nuestro array

    getch();
    return 0;
}