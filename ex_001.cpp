#include <iostream>

using namespace std;

int main() {

    float valor;
    cout << "Defina um valor em real: ";
    cin >> valor;

    float total = valor;

    total = total * 100; // Conversão dos centavos para real.

    float cemReais = 0;

    for(float i = 10000; i <= total; i = i+10000){
        cemReais = cemReais+1;
    }

    total = total - (cemReais * 10000);

    float cinquentaReais = 0;

    for(float i = 5000; i <= total; i = i+5000){
        cinquentaReais = cinquentaReais+1;
    }

    total = total - (cinquentaReais * 5000);

    float vinteReais = 0;

    for(float i = 2000; i <= total; i = i + 2000){
        vinteReais = vinteReais+1;
    }

    total = total - (vinteReais * 2000);

    float dezReais = 0;

    for(float i = 1000; i <= total; i = i + 1000){
        dezReais = dezReais+1;
    }

    total = total - (dezReais * 1000);

    float cincoReais = 0;

    for(float i = 500; i <= total; i = i + 500){
        cincoReais = cincoReais+1;
    }

    total = total - (cincoReais * 500);

    float doisReais = 0;

    for(float i = 200; i <= total; i = i + 200){
        doisReais = doisReais+1;
    }

    total = total - (doisReais * 200);

    float umReal = 0;

    for(float i = 100; i <= total; i = i + 100){
        umReal = umReal+1;
    }

    total = total - (umReal * 100);

    float cinquentaCentavos = 0;

    for(float i = 50; i <= total; i = i + 50){
        cinquentaCentavos = cinquentaCentavos+1;
    }

    total = total - (cinquentaCentavos * 50);

    float vinteCincoCentavos = 0;

    for(float i = 25; i <= total; i = i + 25){
        vinteCincoCentavos = vinteCincoCentavos+1;
    }

    total = total - (vinteCincoCentavos * 25);

    float dezCentavos = 0;

    for(float i = 10; i <= total; i = i + 10){
        dezCentavos = dezCentavos+1;
    }

    total = total - (dezCentavos * 10);

    float cincoCentavos = 0;

    for(float i = 5; i <= total; i = i + 5){
    cincoCentavos = cincoCentavos + 1; 
    }

    total = total - (cincoCentavos * 5);

    float umCentavo = 0;

    for(float i = 1; i <= total; i = i + 1){
        umCentavo = umCentavo+1;
    }

    cout << "O total de R$ " <<  + valor << " reais, pode ser convertido para o seguinte conjunto de cedulas e moedas: " << endl;
    cout << "Notas de 100 reais: " << cemReais << endl;
    cout << "Notas de 50 reais: " << cinquentaReais << endl;
    cout << "Notas de 20 reais: " << vinteReais << endl;
    cout << "Notas de 10 reais: " << dezReais << endl;
    cout << "Notas de 5 reais: " << cincoReais << endl;
    cout << "Notas de 2 reais: " << doisReais << endl;
    cout << "Moedas de 1 real: " << umReal << endl;
    cout << "Moedas de 50 centavos: " << cinquentaCentavos << endl;
    cout << "Moedas de 25 centavos: " << vinteCincoCentavos << endl;
    cout << "Moedas de 10 centavos: " << dezCentavos << endl;
    cout << "Moedas de 5 centavos: " << cincoCentavos << endl;
    cout << "Moedas de 1 centavo: " << umCentavo << endl;

    return 0;
}