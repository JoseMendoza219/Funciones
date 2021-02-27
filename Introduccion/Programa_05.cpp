#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int Factorial(int a);
using namespace std;

int main()
{
  int N1;
    cout<< "Introduzca el valor del numero\n" << endl;
    cin>> N1;
    int fact = Factorial(N1);
    cout<< " El " << N1 << "! es: " << fact << "\n" << endl;

    return 0;
}
int Factorial(int a)
{
    int i;
    int resultado = 1;
    for (i = 1; i<=a; i++)
    {
        resultado *= i;
    }
    return resultado;
}
