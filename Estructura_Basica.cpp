#include<iostream>
#include<conio.h>

using namespace std;

struct Persona {
    char nombre[20]; 
    int edad;
}
persona1, persona2;

int main() {
    
    /*cout<<"El nombre de la primer persona es: "<<persona1.nombre<<" y su edad es: " <<persona1.edad<<endl;
    cout<<"El nombre de la primer persona es: "<<persona2.nombre<<" y su edad es: " <<persona2.edad<<endl;
    */

    cout<<"Digite su nombre: "<<endl;
    cin.getline(persona1.nombre,20,'\n');

    cout<<"Digite su edad: "<<endl;
    cin>>persona1.edad;

    cout<<"El nombre de la primer persona es: "<<persona1.nombre<<" y su edad es: " <<persona1.edad<<endl;

    getch();
    return 0;
}


