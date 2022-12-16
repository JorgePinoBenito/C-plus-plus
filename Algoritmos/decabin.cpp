#include <iostream>

using namespace std;

long abinario(long num)
{
    if (num < 2)
        return num;
    else
        return num % 2 + (10 * abinario(num / 2));
}

int main()
{
    long num, bin;
    cin >> num;
    bin = abinario(num);
    cout << bin;
    return 0;
}