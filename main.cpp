// Ejercicio del 29/05/2024
/*Escribir un programa */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int acum = 0;
    vector<int> numbers;
    for (int i = 1; i <= 20; i++)
    {
        int x;
        cout << "Ingrese un numero " << i << ": " << endl;
        cin >> x;
        acum += x;
        if (x == 0)
        {
            break;
        }

        numbers.push_back(x);
        acum += x;
    }
    cout << "El orden de los numeros inversos es: " << endl;
    for (int i = numbers.size() - 1; i >= 0; i--)
    {

        cout << numbers[i] << endl;
    }
    cout << "La suma de los numeros es de: " << acum << endl;

    return 0;
}