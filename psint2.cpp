// ejercicio 2
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i;
    string nombre;
    string personas[n];
    cout << "digite el numero de posiciones: " << endl;
    cin >> n;
    for (i = 0; i <= n - 1; i++)
    {
        cout << "Digite un nombre para la posicion: " << i << endl;
        cin >> nombre;
        personas[i] = nombre;
    }
    for (i = 0; i <= n - 1; i++)
    {
        cout << "El datod de la posicion " << i << " es " << personas;
    }

    return 0;
}