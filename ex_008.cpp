#include <iostream>

using namespace std;

int main() {

    int paisA = 5000000;
    int paisB = 7000000;

    int ano = 0;

    while(paisA < paisB){
        paisA = paisA + ((paisA/100)*3);
        paisB = paisB + ((paisB/100)*2);
        ano = ano + 1;
    }

    cout << "Visto que o Pais A tem uma populacao de 5.000.000 habitantes, e o Pais B 7.000.000 habitantes, sao necessarios " << ano << " anos, para que o Pais A, ultrapasse a populacao do Pais B.";

    return 0;
}