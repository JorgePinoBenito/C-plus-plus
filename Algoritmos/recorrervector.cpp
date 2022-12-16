#include <iostream>
using namespace std;

int suma(int nro)
{
    if (nro == 0)
        return 0;
    if (nro == 1)
        return 1;
    else
        return nro + suma(nro - 1);
}

int main(void)
{
    int resultado = suma(2);
    cout << resultado;
    return 0;
}