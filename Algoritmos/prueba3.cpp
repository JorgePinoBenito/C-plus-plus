#include <iostream>
#include <vector>

using namespace std;

/**
 * It returns true if none of the elements in the vector are equal to the value to check
 *
 * @param values a vector of integers
 * @param value_to_check The value to check for in the vector.
 *
 * @return A boolean value.
 */
bool none_of(vector<int> values, int value_to_check)
{
    bool comprobador = false;

    for (auto elem : values)
    {
        if (elem == value_to_check)
        {
            comprobador = true;
        }
    }
    return comprobador;
}

int main()
{
    vector<int> values = {3, 2, 1, 3, 10};
    bool all_equal = none_of(values, 2);
    cout << all_equal << endl;
}