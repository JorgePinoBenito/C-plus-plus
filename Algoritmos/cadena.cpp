#include <iostream>
#include <string>
using namespace std;

string sinespacios(string frase)
{
    string nuevafrase = "";
    for (int i = 0; i < frase.length(); i++)
    {
        if (frase[i] != ' ')
        {
            nuevafrase = nuevafrase + frase[i];
        }
    }
    return nuevafrase;
}

int main()
{
    string frase = "hola buenos dias que tal estas";
    string frasesinespacios = sinespacios(frase);
    cout << "La frase con espacios es: " << frase << endl;
    cout << "La frase sin espacios es: " << frasesinespacios;

    return 0;
}
