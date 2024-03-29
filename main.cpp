#include <iostream>

using namespace std;

int main() {

    int opcoes;

    cout << "[1] Verificar a menor quantidade de cedulas e moedas que um valor monetario pode ser decomposto" << endl;
    cout << "[2] Determinar a soma dos numeros primos em um intervalo de inteiros" << endl; 
    cout << "[3] Calcular os divisores de um numero em um intervalo de inteiros" << endl; 
    cout << "[4] Calcular a potencia de um numero elevado a outro." << endl;
    cout << "[5] Determinar a serie de fibonacci para um inteiro" << endl;
    cout << "[6] Calcular a  media de notas dos alunos de uma disciplina" << endl;
    cout << "[7] Determinar qual e o maior salario dentre os entrevistados." << endl;
    cout << "[8] Descubra em quanto tempo um pais com 5000000 habitantes e uma natalidade de 3 porcento ao ano \nconsegue ultrapassar um pais com 7000000 de habitantes e uma natalidade de 2 porcento ao ano." << endl;
    cout << "[9] Realizar a soma dos digitos de um numero inteiro" << endl;
    cout << "[10] Verificar se um inteiro e um numero perfeito" << endl; 
    cout << "[11] Sair do programa" << endl;
    cout << "Digite o codigo correspondente a opcao desejada: ";
    cin >> opcoes; 

    switch(opcoes) {

        // Verificar a menor quantidade de cedulas e moedas que um valor monetario pode ser decomposto

        case 1: { 

        cout << "Verificar a menor quantidade de cedulas e moedas." << endl;
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
        } 
        
        break; 

        // Determinar a soma dos numeros primos em um intervalo de inteiros.

        case 2: {

        cout << "Determinar a soma dos numeros primos em um intervalo de inteiros" << endl;
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

        } break;

        // Calcular os divisores de um numero em um intervalo de inteiros

        case 3: { 

        cout << "Calcular os divisores de um numero n em um intervalo de inteiros" << endl; 
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

        } 
        
        break;

        // Calcular a potencia de um numero elevado a outro.

        case 4: { 

        cout << "calcular a potencia de um numero n elevado a k." << endl;
        int numero;
        cout << "Defina o numero: ";
        cin >> numero;

        int expoente;
        cout << "Defina o exponte: ";
        cin >> expoente;

        int resultado = numero;

        for(int i = 1; i < expoente; i++){
            resultado = resultado * numero;
        }

        cout << numero << " elevado a " << expoente << " e igual a " << resultado;

        } 
        
        break;

        // Determinar a serie de fibonacci para um inteiro

        case 5: { 

        cout << "Determinar a serie de fibonacci para um inteiro n" << endl; 
        int fibonacci;
        cout << "Defina um numero: ";
        cin >> fibonacci;

        int a = 0;
        int b = 1;
        int c = 0;

        cout << "Sequencia de Fibonacci: ";

        for(int i = 0; i <= fibonacci; i++){
            if(i == 0){
                cout << a << ", ";
            } else if (i == 1){
                cout << b << ", ";
            } else if (i == fibonacci){
                c = a + b;
                cout << c << endl;
            } else {
                c = a + b;
                cout << c << ", ";
                a = b;
                b = c;
            }
        }

        } break;

        // Calcular a  media de notas dos alunos de uma disciplina

        case 6: { 

        cout << "Calcular a  media de notas dos alunos de uma dada disciplina." << endl;
        double n;
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

        } 
        
        break;

        // Determinar qual e o maior salario dentre os entrevistados.

        case 7: {
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
        } 
        
        break;

        // Descubra em quanto tempo um pais com 5000000 habitantes e uma natalidade de 3 porcento ao ano
        // consegue ultrapassar um pais com 7000000 de habitantes e uma natalidade de 2 porcento ao ano.

        case 8: {
        cout << "calcule o tempo necessario para que a população do pais A ultrapasse a população do pais B." << endl;
        int paisA = 5000000;
        int paisB = 7000000;

        int ano = 0;

        while(paisA < paisB){
            paisA = paisA + ((paisA/100)*3);
            paisB = paisB + ((paisB/100)*2);
            ano = ano + 1;
        }

        cout << "Visto que o Pais A tem uma populacao de 5.000.000 habitantes, e o Pais B 7.000.000 habitantes, sao necessarios " << ano << " anos, para que o Pais A, ultrapasse a populacao do Pais B.";
        } 
        
        break;

        // Realizar a soma dos digitos de um numero inteiro

        case 9: { 
        cout << "Realizar a soma dos digitos de um inteiro n." << endl; 
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
        } 
        
        break;

        // Verificar se um inteiro e um numero perfeito

        case 10:{
        cout << "Verificar se um inteiro e um numero perfeito" << endl;   
        int num;
        cout << "Defina um numero: ";
        cin >> num;

        int soma = 0;

        for(int i = 1; i < num; i++){
            if(num % i == 0){
                soma = soma + i;
            } 
        }

        if(num == soma ){
            cout << num << " e um numero perfeito.";
        } else {
            cout << num << " nao e um numero perfeito.";
        } 
        } break;
        default: cout << "numero invalido" << endl; 

        case 11: {
            cout << "Saindo...";
            break;
        }


    }

        return 0;
}
