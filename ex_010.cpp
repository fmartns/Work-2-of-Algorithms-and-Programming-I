#include <iostream>

using namespace std;

int main() {

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

    return 0;
}