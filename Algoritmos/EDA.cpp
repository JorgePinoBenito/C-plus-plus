#include <iostream>
using namespace std;

int suma(int a, int b)
{
    if (b == 0)
    { // Condición de salida
        return a;
    }
    else if (a == 0)
    { // Condición de salida
        return b;
    }
    else
    {                              // Llamada recursiva
        return 1 + suma(a, b - 1); // Quito uno a uno de los sumandos y se lo agregaré a "la vuelta del stack"
                                   // cuando hayamos salido de las llamadas recursivas
    }
}

int main()
{
    int n1, n2;
    cout << "Introduzca primer numero: ";
    cin >> n1;
    cout << "Introduzca segundo numero: ";
    cin >> n2;
    cout << "suma: " << suma(n1, n2) << endl;
    return 0;
}