#include <iostream>
using namespace std;

char cuadrado[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void tablero()
{
    system("cls");

    cout
        << "Tres en Raya\n\n";

    cout << "Jugador 1 (X) - Jugador 2 (O)" << endl
         << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << cuadrado[1] << "  |  " << cuadrado[2] << "  |  " << cuadrado[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |" << endl;

    cout << "  " << cuadrado[4] << "  |  " << cuadrado[5] << "  |  " << cuadrado[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |" << endl;

    cout << "  " << cuadrado[7] << "  |  " << cuadrado[8] << "  |  " << cuadrado[9] << endl;

    cout << "     |     |     " << endl;
}

int comprobarvictoria()
{
    if (cuadrado[1] == cuadrado[2] && cuadrado[2] == cuadrado[3])
        return 1;
    else if (cuadrado[4] == cuadrado[5] && cuadrado[5] == cuadrado[6])
        return 1;
    else if (cuadrado[7] == cuadrado[8] && cuadrado[8] == cuadrado[9])
        return 1;
    else if (cuadrado[1] == cuadrado[4] && cuadrado[4] == cuadrado[7])
        return 1;
    else if (cuadrado[2] == cuadrado[5] && cuadrado[5] == cuadrado[8])
        return 1;
    else if (cuadrado[3] == cuadrado[6] && cuadrado[6] == cuadrado[9])
        return 1;
    else if (cuadrado[1] == cuadrado[5] && cuadrado[5] == cuadrado[9])
        return 1;
    else if (cuadrado[3] == cuadrado[5] && cuadrado[5] == cuadrado[7])
        return 1;
    else if (cuadrado[1] != '1' && cuadrado[2] != '2' && cuadrado[3] != '3' && cuadrado[4] != '4' && cuadrado[5] != '5' && cuadrado[6] != '6' && cuadrado[7] != '7' && cuadrado[8] != '8' && cuadrado[9] != '9')
        return 0;
    else
        return -1;
}

int main()
{
    int jugador = 1, i, eleccion;
    char marcar;

    do
    {
        tablero();
        jugador = (jugador % 2) ? 1 : 2;

        cout << "\n\nJugador " << jugador << ", introduce un numero: ";
        cin >> eleccion;

        marcar = (jugador == 1) ? 'X' : 'O';

        if (eleccion == 1 && cuadrado[1] == '1')
            cuadrado[1] = marcar;
        else if (eleccion == 2 && cuadrado[2] == '2')
            cuadrado[2] = marcar;
        else if (eleccion == 3 && cuadrado[3] == '3')
            cuadrado[3] = marcar;
        else if (eleccion == 4 && cuadrado[4] == '4')
            cuadrado[4] = marcar;
        else if (eleccion == 5 && cuadrado[5] == '5')
            cuadrado[5] = marcar;
        else if (eleccion == 6 && cuadrado[6] == '6')
            cuadrado[6] = marcar;
        else if (eleccion == 7 && cuadrado[7] == '7')
            cuadrado[7] = marcar;
        else if (eleccion == 8 && cuadrado[8] == '8')
            cuadrado[8] = marcar;
        else if (eleccion == 9 && cuadrado[9] == '9')
            cuadrado[9] = marcar;
        else
        {
            cout << "Movimiento invalido";
            jugador--;
            cin.ignore();
            cin.get();
        }
        i = comprobarvictoria();
        jugador++;

    } while (i == -1);

    tablero();

    if (i == 1)
        cout << "==>\aJugador " << --jugador << " gana ";
    else
        cout << "==>\aJuego pasado";

    cin.ignore();
    cin.get();

    return 0;
}
