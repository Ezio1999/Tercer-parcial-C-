#include <iostream>
#define PI 3.141592
using namespace std;

int main(){
    int r;
    float perimetro = 0;
    cout << "Introduzca el radio del circulo: " << endl;
    cin >> r;
    perimetro = 2 * PI * r;
    cout << "El perimetro del circulo es de: " << perimetro << endl;

    return 0;
}