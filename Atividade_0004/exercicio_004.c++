#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usuário que entre com o número
    cout << "Digite um número para ver sua tabuada: ";
    cin >> numero;

    // Inicializa o contador
    int contador = 1;

    // Mostra a tabuada usando um loop while
    cout << "Tabuada do " << numero << ":" << endl;
    while (contador <= 10) {
        cout << numero << " x " << contador << " = " << numero * contador << endl;
        contador++;
    }

    return 0;
}