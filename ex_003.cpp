#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Defina um numero: ";
    cin >> n;

    cout << "Agora vamos definir o intervalo de numeros." << endl;

    int a;
    cout << "Defina o primeiro numero (deve ser um numero inteiro): : ";
    cin >> a;

    int b;
    cout << "Defina o segundo numero (deve ser um numero intero maior que o primeiro): ";
    cin >> b;

    int soma = 0;

    for (int i = a; i <= b; i++){
        if (n % i == 0) {
            soma = soma + i;
        }
    }

    cout << "A soma entre todos os divisores de " << n << " num intervalo de " << a << " a " << b << " resulta em " << soma;

    return 0;
}