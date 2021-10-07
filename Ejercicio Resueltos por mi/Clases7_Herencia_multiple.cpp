#include <iostream>
#include <stdlib.h>
using namespace std;

//CLASE PERSONA
//---------------------------------------------
class Persona
{
private: //Atributos
    string nombre;
    int edad;

public:                   //Metodos
    Persona(string, int); //Constructor
    void mostrarPersona();
};

//CLASE EMPLEADO
//--------------------------------------------
class Empleado : public Persona
{
private:
    int sueldo;

public:
    Empleado(string, int, int);
    void mostrarEmpleado();
};

//CLASE ESTUDIANTE
//--------------------------------------------

class Estudiante : public Persona
{
private:
    int nota_final;

public:
    Estudiante(string, int, int);
    void mostrarEstudiante();
};

//CLASE UNIVERSITARIO
class Universitario : public Estudiante
{
private:
    string carrera;

public:
    Universitario(string, int, int, string);
    void mostrarUniversitario();
};

//Constructor Persona
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrarPersona()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

//Constructor empleado
Empleado::Empleado(string _nombre, int _edad, int _sueldo) : Persona(_nombre, _edad)
{
    sueldo = _sueldo;
}

void Empleado::mostrarEmpleado()
{
    mostrarPersona(); //Puedo llamar a metodos de la clase padre que son publicos
    cout << "Sueldo: " << sueldo << endl;
}

//Constructor estudiante
Estudiante::Estudiante(string _nombre, int _edad, int _nota_final) : Persona(_nombre, _edad)
{
    nota_final = _nota_final;
}

void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout << "Nota: " << nota_final << endl;
}

//Constructor universitario
Universitario::Universitario(string _nombre, int _edad, int _nota, string _carrera) : Estudiante(_nombre, _edad, _nota)
{
    carrera = _carrera;
}

void Universitario::mostrarUniversitario()
{
    mostrarEstudiante();
    cout << "Carrera: " << carrera << endl;
}

//MAIN
//---------------------------------------------
int main()
{
    Universitario u1("Joaquin", 28, 8, "Ing. Electrica");
    Empleado e1("Carlos", 26, 36000);

    cout << "Empleado:" << endl;
    e1.mostrarEmpleado();

    cout << "Universitario:" << endl;
    u1.mostrarUniversitario();

    system("pause");
    return 0;
}