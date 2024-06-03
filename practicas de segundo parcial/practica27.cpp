/*Dado el siguiente fragmento de codigo identifique las declaraciones de variables, las instrucciones de asignacion, los operadores
y las expresiones ¿Cual sera el resultado de evaluar esas expresiones?
    int i1, i2, i3; 
    float r1, r2 ,r3;
    i1 = 12;
    i2 = 5;
    r1 = 12.0;
    r2 = 5;
    r3 = r1/r2;
    r3 = i1/i2;
    i3 = i1/r2;
*/
#include<iostream>
using namespace std;
int main(){
    int i1, i2, i3; //Declaracion de variables del tipo entero 
    float r1, r2 ,r3; //Declaracion de variables del tipo flotante 
    i1 = 12;    //asignacion de los datos de tipo entero hasta la variable i2
    i2 = 5;
    r1 = 12.0; //asignacion de los flotantes 
    r2 = 5.45;
    r3 = r1/r2; //operadores 
    r3 = i1/r1;


    i3 = i1/r2;
    i1 = r1 * i3;
    cout << r3;
    cout << i1;


    return 0;
}





//que pasa si multiplico o divido un entero con un decimal: lo que pasa es que imprime solamente 1 y si se
//multiplica real por entero sale real