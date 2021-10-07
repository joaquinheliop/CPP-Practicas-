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

public:                     //Metodos
    Persona(string, int);   //Constructor
    virtual void mostrar(); // con la palabra virtual indico que el metodo tiene polimorfismo
};

// Constructor Persona
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrar()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

//CLASE ALUMNO
//--------------------------------------------

class Alumno : public Persona
{
private:
    int nota_final;

public:
    Alumno(string, int, int);
    void mostrar();
};

Alumno::Alumno(string _nombre, int _edad, int _nota_final) : Persona(_nombre, _edad)
{
    nota_final = _nota_final;
}

void Alumno::mostrar()
{
    Persona::mostrar(); //Le digo que en persona ya existe este metodo y solo completo con lo que me falta mostar
    cout << "Nota Final: " << nota_final << endl;
}

//CLASE PROFESOR
//--------------------------------------------
class Profesor : public Persona
{
private:
    string materia;

public:
    Profesor(string, int, string);
    void mostrar();
};

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad)
{
    materia = _materia;
}

void Profesor::mostrar()
{
    Persona::mostrar(); //Le digo que en persona ya existe este metodo y solo completo con lo que me falta mostar
    cout << "Materia: " << materia << endl;
}

int main()
{
    Persona *vector[3];

    vector[0] = new Alumno("Joaquin", 28, 8);
    vector[1] = new Alumno("Ada", 29, 10);
    vector[2] = new Profesor("Carlos", 45, "Matemraticas");

    vector[0]->mostrar();
    cout << "\n";
    vector[1]->mostrar();
    cout << "\n";
    vector[2]->mostrar();

    system("pause");
    return 0;
}