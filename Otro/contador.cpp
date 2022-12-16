#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int horas = 00;
    int minutos = 00;
    int segundos = 58;

    while (true)
    {
        cout << horas << ":" << minutos << ":" << segundos << endl;
        Sleep(1000);
        segundos++;
        if (segundos == 60)
        {
            minutos++;
            segundos = 0;
        }
        if (minutos == 60)
        {
            horas++;
            minutos = 0;
        }
        if (horas == 25)
        {
            horas = 0;
            minutos = 0;
            segundos = 0;
        }
    }
    return 0;
}