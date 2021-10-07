#include <iostream>
#include <stdlib.h>
using namespace std;

class Perro
{
private:
    string nombre, raza;

public:
    Perro(string, string); //Constructor
    ~Perro();              //Destructor igual que el constructor pero sin parametros

    void mostrarDatos();
    void jugar();
};

//Contructor
Perro::Perro(string _nombre, string _raza)
{
    nombre = _nombre;
    raza = _raza;
}

//Destructor
Perro::~Perro()
{
}

void Perro::mostrarDatos()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Raza: " << raza << endl;
}

void Perro::jugar()
{
    cout << "El perro esta jugando" << endl;
}

int main()
{
    Perro p1("Coba", "Gato");

    p1.jugar();
    p1.mostrarDatos();

    system("pause");
    return 0;
}