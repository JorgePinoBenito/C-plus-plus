#include <iostream>
using namespace std;

int main()
{
    cout << "OPERACIONES CON DOS NUMEROS" << endl;
    int a, b;
    char op; //Decalramos las variables
    cout << "Escribe un numero : ";
    cin >> a; //pedimos el primer n�mero
    cout << "Escribe otro numero : ";
    cin >> b;                                                            //pedimos el segundo n�mero
    cout << "Tus numeros son " << a << " y " << b << endl;               //confirmamos n�meros
    cout << "Elige una operacion, para ello escribe su letra: " << endl; //explicaci�n al usuario
    cout << "S = Suma; R = Resta; M = Multiplicacion; D = Division." << endl;
    cout << "Tu operacion : ";
    cin >> op; //pedimos operacion
    if ((op == 's') || (op == 'S'))
    { //opci�n 1: Suma.
        cout << "Operacion : Suma " << endl;
        cout << a << " + " << b << " = " << a + b << endl;
    }
    else if ((op == 'r') || (op == 'R'))
    { //opci�n 2: Resta
        cout << "Operacion : Resta " << endl;
        cout << a << " - " << b << " = " << a - b << endl;
    }
    else if ((op == 'm') || (op == 'M'))
    { //opci�n 3: Multipliccion
        cout << "Operacion : Multiplicacion " << endl;
        cout << a << " * " << b << " = " << a * b << endl;
    }
    else if ((op == 'd') || (op == 'D'))
    { //opci�n 4 Divisi�n
        cout << "Operacion : Division " << endl;
        cout << a << " / " << b << " = " << a / b << endl;
    }
    else
    { //Respuesta para opci�n equivocada.
        cout << "La letra escrita no se corresponde con ninguna operacion." << endl;
    }
}