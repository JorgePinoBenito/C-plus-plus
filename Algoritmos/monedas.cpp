#include <iostream>
#include <vector>
using namespace std;

void CambioMonedas(const vector<int> &monedas, double cantidad)
{
    vector<int> veces;
    vector<int> cambio;

    for (int i = 0; i < monedas.size(); i++)
    {
        veces.push_back(0);
        cambio.push_back(0);
    }

    for (int i = 0; i < monedas.size(); i++)
    {
        veces[i] = cantidad / monedas[i];
        cantidad = int(cantidad) % monedas[i];

        // cambio.push_back(monedas[i]);
        cambio.push_back(veces[i]);
    }

    for (int i = 0; i < monedas.size(); i++)
    {
        cout << "Monedas " << monedas[i] << " cantidad " << veces[i] << endl;
    }

    cout << "------------------------------------------------" << endl;

    for (int i = 0; i < monedas.size(); i++)
    {
        cout << "Monedas " << monedas[i] << " cantidad " << cambio[i] << endl;
    }
}

int main()
{

    const vector<int> monedas = {100, 50, 20, 10, 5, 2, 1}; // Definimos un vector constante de monedas europeas
    double importe = 0.0;

    cout << "Ingresa el importe: ";
    cin >> importe;
    cout << endl;

    cout << "Para devolver " << importe << " debes de devolver " << endl
         << endl;

    CambioMonedas(monedas, importe);

    return 0;
}
