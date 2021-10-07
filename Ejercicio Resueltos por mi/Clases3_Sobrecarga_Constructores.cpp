#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha
{
private:
    int dia, mes, anio;

public:
    Fecha(int, int, int); //Constructor 1
    Fecha(long);          //Constructor 2. Esto es sobrecarga de constructores
    void dameFecha();
};

Fecha::Fecha(long _fecha)
{
    anio = int(_fecha / 10000); //lo divido asi y el int me ignora lo que esta detras de la coma
    mes = int((_fecha - anio * 10000) / 100);
    dia = int(_fecha - anio * 10000 - mes * 100);
}

Fecha::Fecha(int _dia, int _mes, int _anio)
{
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

void Fecha::dameFecha()
{
    cout << "La fecha es: " << dia << "/" << mes << "/" << anio << endl;
}

int main()
{
    Fecha hoy(7, 10, 21); //Le doy dos formatos de fecha pero las interpreta igual debido a que tengo dos constructores
    Fecha ayer(20211012);

    hoy.dameFecha();
    ayer.dameFecha();

    system("pause");
    return 0;
}