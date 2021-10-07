#include <iostream>
#include <stdlib.h>
#include <fstream> //libreria para laburar con archivos
using namespace std;

void escribir()
{
    ofstream archivo; //creo el archivo del tipo escritura
    string nombre_archivo, texto;

    cout << "Ingrese le nombre de su archivo: ";
    getline(cin, nombre_archivo);

    archivo.open(nombre_archivo.c_str(), ios::out); //Si existe lo abre si no existe lo crea puedo darle una direccion para crarlo "c://ejemplo.txt" con ios::out indico archivo de escritura

    if (archivo.fail())
    {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    cout << "Digite el texto del archivo: ";
    getline(cin, texto); //guardo el texto

    archivo << texto.c_str(); //le meto texto al aarchivo
    archivo.close();
}

int main()
{
    escribir();

    system("pause");
    return 0;
}
