#include <iostream>
using namespace std;
int main()
{
    int n, i, pos;
    char paises[10];
    char nombre[20];
    cout << "Digite el numero de paises " << endl;
    cin >> n;
    paises[n];
    for (i = 1; i <= n; i++)
    {
        cout << "Digite el pais";
        cin >> nombre;
        paises[i] = nombre;
    }
    cout << "Digite la posicion: " << endl;
    cin >> pos; 

    cout << "El pais que hay en la posicion " << pos << "es " << paises[pos] << endl;

    return 0;
}