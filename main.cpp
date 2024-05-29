// Ejercicio del 29/05/2024
/*Escribir un programa */

#include <iostream>
using namespace std;

int main()
{
    int acum = 0, x, cont = 1;
    for (int i = 0; i <= 20; i++)
    {
        if (x > 0)
        {
        cout << "Ingrese un numero " << i << ": " << endl;
        cin >> x;
        acum += x;
        }
    }
    cout << "La suma de los numeros es de: " << acum << endl;

    return 0;
}