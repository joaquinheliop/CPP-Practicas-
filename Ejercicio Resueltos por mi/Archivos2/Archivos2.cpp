#include <iostream>
#include <stdlib.h>
#include <fstream> //libreria para laburar con archivos
using namespace std;

void leer()
{
    ifstream archivo; //creo un archivo de tipo lectura
    string lectura;

    archivo.open("leer.txt", ios::in); //elijo el archivo y lo pongo en modo lectura con ios::in

    if (archivo.fail())
    {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    while (!archivo.eof()) //mientras que no sea el final de mi archivo
    {
        getline(archivo, lectura);
        cout << lectura << endl;
    }
    archivo.close();
}
int main()
{
    leer();
    system("pause");
    return 0;
}
