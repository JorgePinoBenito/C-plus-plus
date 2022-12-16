#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string palabra = "hola";
    string palabrausuario = "";
    int intentos = 0;

    cout << "***COMPROBADOR DE PALINDROMOS***";
    cout << "La palabra sin invertir es: " << palabra << endl;

    do
    {
        cout << "Introduce la palabra invertida y te dire si es correcta como palindromo: ";
        getline(cin, palabrausuario);

        string invertido(palabra.rbegin(), palabra.rend());
        if (palabrausuario == invertido)
        {
            cout << "Has acertado el palindromo." << endl;
            break;
        }
        else
        {
            cout << "No has acertado el palindromo." << endl;
        }

        intentos++;
    } while (intentos < 5);

    cout << "Intentos agotados, has perdido." << endl;

    return 0;
}