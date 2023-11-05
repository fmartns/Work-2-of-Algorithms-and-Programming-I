#include <iostream>

using namespace std;

int main() {

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

    return 0;
}