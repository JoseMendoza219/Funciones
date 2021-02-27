#include <iostream>
#include <stdlib.h>
#include <stdio.h>

void Max(int a, int b);
using namespace std;

int main()
{
  int N1, N2;
    cout<< "Introduzca el valor del primer numero\n" << endl;
    cin>> N1;
    cout<< "Introduzca el valor del segundo numero\n" << endl;
    cin>> N2;
    Max (N1,N2);
    return 0;
}
void Max(int a, int b)
{
    if(a>b)
    {
      cout<< " El " << a << " es mayor\n " << endl;
    }
    else if(a<b)
    {
        cout<< " El " << b << " es mayor\n " << endl;
    }
    else
        cout<< " Error\n " << endl;
}
