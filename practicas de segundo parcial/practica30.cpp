#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout << "Ingrese 3 numeros: " << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    if (x == 1 && y == 2 && z == 3)
    {
        cout << "Acceso permitido :)" << endl;
    }
    else{
        cout << "Acceso denegado :(" << endl;
    }

    return 0;
}