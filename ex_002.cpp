#include <iostream>

using namespace std;

int main() {
    
    int n1;
    cout << "Defina o primeiro numero (deve ser inteiro e maior que zero): ";
    cin >> n1;

    int n2;
    cout << "Defina o segundo numero (seguindo os mesmos criterios, deve ser maior que o primeiro): ";
    cin >> n2;

    if(n1 <= 0) {
        cout << "O primeiro numero deve ser maior que 0.";
    } 
    
    else if (n1 > n2) {
        cout << "O segundo numero deve ser maior que o primeiro.";
    } 
    
    else {
        int primos = 0;

        for(int i = n1; i <= n2; i++) {
            int divisores = 0;

            for(int d = 1; d <= n2; d++) {

                if(i % d == 0){
                    divisores++;
                }
            }

            if(divisores == 2){
                primos += i;
            }
        }

        cout << "A soma de todos os primos entre " << n1 << " e " << n2 << " e " << primos;
    }

    return 0;
}