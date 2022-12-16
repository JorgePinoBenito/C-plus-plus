#include <iostream>

using namespace std;

int main()
{
    int n1 = 5;
    int n2 = 2;
    int temp = 0;

    cout << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "temp = " << temp << endl;

    swap(n1, n2);

    cout << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "temp = " << temp << endl;

    return 0;
}

void swap(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}