#include <iostream>

using namespace std;

int main() {
    int limite;
    
    cout << "Ingrese un número límite: ";
    cin >> limite;
    
    cout << "Múltiplos de 5 hasta " << limite << ":" << endl;
    for (int i = 5; i <= limite; i += 5) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}