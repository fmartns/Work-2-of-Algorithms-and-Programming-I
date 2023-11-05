#include <iostream>

using namespace std;

int main() {

    cout << "Calcular a  media de notas dos alunos de uma dada disciplina." << endl;

    int n;
    cout << "Defina o numero de notas que deseja calcular: ";
    cin >> n;

    int total = 0;

    for(int i = 1; i <= n; i++){
        double nota;
        cout << "Defina a nota do aluno [" << i << "] : ";
        cin >> nota;

        total = total + nota;

    }

    double media = total / n;

    cout << "A media dos " << n << " alunos, foi " << media << "."; 

    return 0;
}