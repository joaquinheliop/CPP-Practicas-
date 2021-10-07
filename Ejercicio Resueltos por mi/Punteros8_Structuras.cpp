#include <iostream>
#include <conio.h>
using namespace std;

struct Persona 
{
    char nombre[30];
    int edad;
}persona, *dir_persona = &persona;

void pedirDatos() {

    cout<<"Ingrese nombre: ";
    cin.getline(dir_persona->nombre,30,'\n');
    cout<<"Ingrese edad: ";
    cin>>dir_persona->edad;
}

void mostrarDatos(Persona *dir_persona ) {
    cout<<"Su nombre es "<<dir_persona->nombre<<" y su edad es "<<dir_persona->edad;
}


int main()
{
    pedirDatos();
    mostrarDatos(dir_persona);

    getch();
    return 0;
}
