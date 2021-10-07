#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion
{
    char direccion[20];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
} empleados[2];

int main()
{

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin); //Vacia buffer para poder digitar valores

        cout << "Escriba el nombre del " << i + 1 << " empleado" << endl;
        cin.getline(empleados[i].nombre, 20, '\n');

        cout << "Escriba su direccion" << endl;
        cin.getline(empleados[i].dir_empleado.direccion, 20, '\n');

        cout << "Escriba su ciudad" << endl;
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');

        cout << "Escriba su provincia" << endl;
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');

        cout << "Escriba su salario" << endl;
        cin >> empleados[i].salario;
        cout << '\n';
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Datos del empleado " << i + 1 << ":" << endl;
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Direccion: " << empleados[i].dir_empleado.direccion << ", " << empleados[i].dir_empleado.ciudad << ", " << empleados[i].dir_empleado.provincia << endl;
        cout << "Salario: " << empleados[i].salario;
        cout << '\n';
    }

    getch();
    return 0;
}
