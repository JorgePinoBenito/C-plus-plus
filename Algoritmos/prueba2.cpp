#include <iostream>
#include <vector>

using namespace std;

bool all_of(vector<int> values, int value_to_check)
{
    bool comprobador = true;

    for (auto elem : values)
    {
        if (elem != value_to_check)
        {
            comprobador = false;
        }
    }
    return comprobador;
}

int main()
{
    vector<int> values = {2, 2, 2, 2, 2};
    bool all_equal = all_of(values, 2);
    cout << all_equal << endl;
}