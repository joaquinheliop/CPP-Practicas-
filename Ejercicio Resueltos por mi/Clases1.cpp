#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona
{
    //Atriburos
private:
    int edad;
    string nombre;

    //Metodos
public:
    Persona(int, string); //El metodo constructor nos ayuda a incializar los atributos de una clase
    void leer();
    void correr();
};

Persona::Persona(int _edad, string _nombre)
{
    /*Con los :: digo que el objeto persona pertence a la clase Persona, otros objetos de Persona son
    leer() y correr(). Los parametros que son atriburtos de una clase se le pone un nombre diferente al 
    de los atributos en este caso guion bajo al comienzo para que se note que el metodo es un metodo constructor.*/

    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    cout << "Soy " << nombre << " y estoy leyendo un libro" << endl;
}

void Persona::correr()
{
    cout << "Soy " << nombre << " y me gusta correr aunque tenga " << edad << " años" << endl;
}

int main()
{
    Persona Joaquin = Persona(28, "Joaquin"); //Creo el objeto y lo inicializo conel metodo constructor
    Persona Ada(29, "Ada");                   //Forma corta de crear un objeto es pone el nombre y los atributos entre parentesis

    Joaquin.correr();
    Joaquin.leer();
    Ada.leer();
    Ada.correr();

    system("pause");
    return 0;
}