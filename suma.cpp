#include <iostream>

using namespace std;

int main() {
    int limite;
    int suma = 0;
    int contador = 0;
    
    cout << "Ingrese un número límite: ";
    cin >> limite;
    
    for (int i = 1; i <= limite; i += 2) {
        suma += i;
        contador++;
    }
    
    cout << "Cantidad de números impares: " << contador << endl;
    cout << "Suma total de los números impares: " << suma << endl;
    
    return 0;
}