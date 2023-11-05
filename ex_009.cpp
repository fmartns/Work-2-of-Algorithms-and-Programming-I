#include <iostream>

using namespace std;

int main()
{
    int valor;
    cout << "Defina um numero: ";
    cin >> valor;
    
    int unitario;
    
    int soma = 0;
    
    while(valor > 0){
        unitario = valor % 10;
        valor = (valor-unitario) / 10;
        soma = soma + unitario;
    }
    
    cout << "A soma dos algoritimos resulta em " << soma;

    return 0;
}
