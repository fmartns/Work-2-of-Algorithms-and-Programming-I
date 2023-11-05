#include <iostream>

using namespace std;

int main() {

    int numero;
    cout << "Defina o numero: ";
    cin >> numero;

    int expoente;
    cout << "Defina o exponte: ";
    cin >> expoente;

    int resultado = numero;

    for(int i = 1; i <= expoente; i++){
        resultado = resultado * numero;
    }

    cout << numero << " elevado a " << expoente << " e igual a " << resultado;

    return 0;
}