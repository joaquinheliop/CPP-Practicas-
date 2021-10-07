#include <iostream>
#include <stdlib.h>
#include <fstream> //libreria para laburar con archivos
using namespace std;

void agregar()
{
    ofstream archivo;
    string texto;

    archivo.open("agregar.txt", ios::app); //abro el archivo en modo agregar cosas

    if (archivo.fail())
    {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    cout << "Digite el texto que quiere agregar al archivo: ";
    getline(cin, texto); //guardo el texto

    archivo << texto.c_str(); //le meto texto al aarchivo
    archivo.close();
}

int main()
{
    agregar();

    system("pause");
    return 0;
}
