#include <iostream>

using namespace std;

int main() {
    int numero;

    
    cout << "Ingrese un número entero para iniciar la cuenta regresiva: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, ingrese un número mayor o igual a cero." << endl;
    } else {
        cout << "\n--- ¡Cuenta regresiva iniciada! ---\n";
        
        
        for (int i = numero; i >= 0; i--) {
            cout << i << endl;
        }
        
        cout << "\n¡Tiempo cumplido! 🚀" << endl;
    }

    return 0;
}