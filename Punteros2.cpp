#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    int num, *dir_num;

    cout<<"Ingrese un numero"<<endl;
    cin>>num;

    dir_num = &num; //Estamos guardadndo la posicion de memoria de num

    if (*dir_num%2==0) {
        cout<<"El numero: "<<*dir_num<<" es par"<<endl;
        cout<<"Su direccion de memoria es: "<<dir_num<<endl;
    } else {
        cout<<"El numero: "<<*dir_num<<" es impar"<<endl;
        cout<<"Su direccion de memoria es: "<<dir_num<<endl;

    }


    getch();
    return 0;
}
