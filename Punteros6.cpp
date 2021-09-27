#include<iostream>
#include<conio.h>

using namespace std;



void intercambio(float *dirNum1, float *dirNum2) {
    float aux;

    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;

    
}


int main() {

    float num1=20.8, num2= 3.23;

    cout<<"Los numeros inicialmente son: "<<num1<<" y "<<num2<<endl;

    intercambio(&num1,&num2);

    cout<<"Los numeros finalmente son: "<<num1<<" y "<<num2<<endl;
   

    getch();
    return 0;
}