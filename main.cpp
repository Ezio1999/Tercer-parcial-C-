// Ejercicio del 29/05/2024
/*Escribir un programa */

#include <iostream>
using namespace std;

int main()
{
    int acum = 0, x, cont = 1;
    do
    {
        cout << "Ingrese un numero " << cont << ": " << endl;
        cin >> x;
        if (x  != 0)
        {
            acum += x;
            cont += 1;
        }
        else
        {
            x = 0;
        }
    } while (x == 0 || cont <= 20);

    cout << "La suma es de: " << acum << endl;

    return 0;
}