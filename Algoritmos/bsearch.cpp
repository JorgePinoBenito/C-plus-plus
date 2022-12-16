#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printArray(const vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int bs(const vector<int> &vec, const int &num)
{
    int inf = 0;
    int sup = vec.size() - 1;
    int med = 0;
    int elemmedio = 0;

    while (inf <= sup)
    {
        med = (inf + sup) / 2;
        elemmedio = vec[med];

        if (elemmedio > num)
        {
            sup = med - 1;
        }
        else if (elemmedio < num)
        {
            inf = med + 1;
        }
        else
        {
            return med;
        }
    }
    return -1;
}

int main()
{
    // vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> vec = {5, 232, 1, 354, 2};
    printArray(vec);
    sort(vec.begin(), vec.end());
    printArray(vec);
    int posicion = bs(vec, 2);
    cout << posicion;
    return 0;
}