#include <iostream>
using namespace std;

int main() {
    int idade;
    int somaIdades = 0;
    int contador = 0;

    cout << "Digite as idades (digite 0 para finalizar):" << endl;

    while (true) {
        cout << "Idade " << contador + 1 << ": ";
        cin >> idade;

        if (idade == 0) {
            break;
        }

        somaIdades += idade;
        contador++;
    }

    if (contador == 0) {
        cout << "Nenhuma idade foi digitada." << endl;
    } else {
        double media = static_cast<double>(somaIdades) / contador;
        cout << "A média das idades digitadas é: " << media << endl;
    }

    return 0;
}