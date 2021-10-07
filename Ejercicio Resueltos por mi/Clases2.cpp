#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo
{
private:
    int largo, ancho;

public:
    Rectangulo(int _largo, int _ancho);
    int area();
    int perimetro();
};

Rectangulo::Rectangulo(int _largo, int _ancho)
{
    largo = _largo;
    ancho = _ancho;
}

int Rectangulo::area()
{
    int area = largo * ancho;
    return area;
}

int Rectangulo::perimetro()
{
    int perimetro = largo * 2 + ancho * 2;
    return perimetro;
}

int main()
{

    Rectangulo r1(3, 2);

    cout << "El area es: " << r1.area() << endl;
    cout << "El perimetro es: " << r1.perimetro() << endl;

    system("pause");
    return 0;
}