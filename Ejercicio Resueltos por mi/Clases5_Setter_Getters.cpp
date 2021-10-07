#include <iostream>
#include <stdlib.h>
using namespace std;

class Punto
{
private:
    int x, y;

public:
    Punto(); //Constructor
    void setPunto(int, int);
    int getPuntoX();
    int getPuntoy();
};

Punto::Punto()
{
}

/*Establecerle valores a los atributos, se puede hacer por construtor
pero por ejemplo si quiero arrancar una clase que tiene 20 atributos
y no se los quiero pasar todos de una uso los setters*/
void Punto::setPunto(int _x, int _y)
{
    x = _x;
    y = _y;
}

/* con los metodos setters obtengo el valor de mis atributos privados*/
int Punto::getPuntoX()
{
    return x;
}

int Punto::getPuntoy()
{
    return y;
}

int main()
{
    Punto p1;
    p1.setPunto(10, 20);

    cout << p1.getPuntoX() << endl;
    cout << p1.getPuntoy() << endl;

    system("pause");
    return 0;
}