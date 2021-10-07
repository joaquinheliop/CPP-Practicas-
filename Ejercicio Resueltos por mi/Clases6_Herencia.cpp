#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona
{
private: //Atributos si estan en private las demaas clases no pueden heredar estos atributos, para poder heredar tienen que estar en protected
    string nombre;
    int edad;

public:
    Persona(string, int); //Constructor
    void mostrarPersona();
};

//Constructor Persona
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrarPersona()
{
    cout << "El nombre de la persona es: " << nombre << " y su edad es: " << edad << endl;
}

class Alumno : public Persona //Le doy herencia de los metodos y atributos publicos de la clase persona con ": public Persona"
{
private:
    string codigo_alumno;
    int nota_final;

public:
    Alumno(string, int, string, int); //En el constructor si quiero agregar parametros tengo que poner primeros los de la clase padre y depsues los nuevos
    void mostrarAlumno();
};

//Constructor alumno
Alumno::Alumno(string _nombre, int _edad, string _codigo_alumno, int _nota_final) : Persona(_nombre, _edad) //Como ya tengo los datos de la clase padre tengo que especificarlo en el constructor
{
    codigo_alumno = _codigo_alumno;
    nota_final = _nota_final;
}

void Alumno::mostrarAlumno()
{
    mostrarPersona(); //Puedo llamar a metodos de la clase padre que son publicos
    cout << "el codigo de alumno es: " << codigo_alumno << " y su nota es: " << nota_final << endl;
}

int main()
{
    Alumno a1("Joaquin", 28, "011", 8);

    a1.mostrarAlumno();

    system("pause");
    return 0;
}