#include <iostream>
#include <vector>
using namespace std;

void bubble(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[i])
            {
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}

void mostrar(const vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<int> vec = {21, 43, 756, 76, 12, 1};
    cout << "Vector sin ordenar:";
    mostrar(vec);

    cout << "Vector ordenado:";
    bubble(vec);
    mostrar(vec);

    return 0;
}
