#include <iostream>

using namespace std;

int main() {

    cout << "Calcular o maior salario entre os entrevistados. " << endl;

    int n;
    cout << "Defina o numero de pessoas que serao entrevistadas: ";
    cin >> n;

    double maiorSalario;

    for(int i = 1; i <= n; i++){
        double salario;
        cout << "Defina o salario do [" << i << "] entrevistado: ";
        cin >> salario;

        if(i == 1){
            maiorSalario = salario;
        }

        if(salario > maiorSalario){
            maiorSalario = salario;
        }
    }

    cout << "O maior salario entre os " << n << " entrevistados, foi R$ " << maiorSalario << ".";

    return 0;

}
