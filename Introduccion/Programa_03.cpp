#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int Max(int a, int b);
using namespace std;

int main()
{
  int N1, N2, N3;
    cout<< "Introduzca el valor del primer numero\n" << endl;
    cin>> N1;
    cout<< "Introduzca el valor del segundo numero\n" << endl;
    cin>> N2;
    cout<< "Introduzca el valor del tercer numero\n" << endl;
    cin>> N3;
    int max1 = Max (N1,N2);
    int max2 = Max (max1,N3);
    cout<< " El " << max2 << " es mayor\n " << endl;
    return 0;
}
int Max(int a, int b)
{
    int c;
    if (a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    return c;

}
