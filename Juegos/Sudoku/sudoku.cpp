#include <iostream>
#define N 9
using namespace std;

int sudoku[N][N] = {
    {3, 0, 6, 5, 0, 8, 4, 0, 0},
    {5, 2, 0, 0, 0, 0, 0, 0, 0},
    {0, 8, 7, 0, 0, 0, 0, 3, 1},
    {0, 0, 3, 0, 1, 0, 0, 8, 0},
    {9, 0, 0, 8, 6, 3, 0, 0, 5},
    {0, 5, 0, 0, 9, 0, 6, 0, 0},
    {1, 3, 0, 0, 0, 0, 2, 5, 0},
    {0, 0, 0, 0, 0, 0, 0, 7, 4},
    {0, 0, 5, 2, 0, 6, 3, 0, 0}};

bool estapresenteencolumna(int col, int num)
{
    for (int fil = 0; fil < N; fil++)
    {
        if (sudoku[fil][col] == num)
        {
            return true;
        }
    }
    return false;
}

bool estapresenteenfila(int fil, int num)
{
    for (int col = 0; col < N; col++)
    {
        if (sudoku[fil][col] == num)
        {
            return true;
        }
    }
    return false;
}

bool estapresenteencaja(int filadecomienzodecaja, int columnadecomienzodecaja, int num)
{
    for (int fil = 0; fil < 3; fil++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (sudoku[fil + filadecomienzodecaja][col + columnadecomienzodecaja] == num)
            {
                return true;
            }
        }
    }
    return false;
}

void dibujarsudoku()
{
    for (int fil = 0; fil < N; fil++)
    {
        for (int col = 0; col < N; col++)
        {
            if (col == 3 || col == 6)
            {
                cout << " | ";
            }
            cout << sudoku[fil][col] << " ";
        }
        if (fil == 2 || fil == 5)
        {
            cout << endl;
            for (int i = 0; i < N; i++)
            {
                cout << "---";
            }
        }
        cout << endl;
    }
}

bool buscarespaciovacio(int &fil, int &col)
{
    for (fil = 0; fil < N; fil++)
    {
        for (col = 0; col < N; col++)
        {
            if (sudoku[fil][col] == 0)
            {
                return true;
            }
        }
    }
    return false;
}

bool esespaciovalido(int fil, int col, int num)
{
    return !estapresenteenfila(fil, num) && !estapresenteencolumna(col, num) && !estapresenteencaja(fil - fil % 3, col - col % 3, num);
}

bool resolversudoku()
{
    int fil, col;
    if (!buscarespaciovacio(fil, col))
    {
        return true;
    }
    for (int num = 1; num <= 9; num++)
    {
        if (esespaciovalido(fil, col, num))
        {
            sudoku[fil][col] = num;
            if (resolversudoku())
            {
                return true;
            }
            sudoku[fil][col] = 0;
        }
    }
    return false;
}

int main()
{
    cout << endl;
    cout << "Tu sudoku inicial era: " << endl
         << endl;

    dibujarsudoku();

    cout << endl
         << "***************************************************************************************************" << endl
         << endl;

    cout << "Tu sudoku resuelto es: " << endl
         << endl;

    if (resolversudoku() == true)
    {
        dibujarsudoku();
    }
    else
    {
        cout << "No existe solucion para este sudoku";
    }
    return 0;
}
