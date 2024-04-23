//receba dois numeros
//execute uma das operaçoes
    //o primeiro numero elevado ao segundo numero
    //raiz quadrada de cada um dos números
    //raiz cubica de cada um dos numeros
//se opçao invalida
    //mensagem de erro
    //encerre o programa

#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double num1, num2;
    int opcao;

    cout << "Informe dois números: ";
    cin >> num1 >> num2;

    cout << "Escolha uma operação:\n";
    cout << "1 - O primeiro número elevado ao segundo número.\n";
    cout << "2 - Raiz quadrada de cada um dos números.\n";
    cout << "3 - Raiz cúbica de cada um dos números.\n";
    cout << "Digite o número da operação desejada: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Resultado: " << pow(num1, num2) << endl;
            break;
        case 2:
            cout << "Raiz quadrada de " << num1 << ": " << sqrt(num1) << endl;
            cout << "Raiz quadrada de " << num2 << ": " << sqrt(num2) << endl;
            break;
        case 3:
            cout << "Raiz cúbica de " << num1 << ": " << cbrt(num1) << endl;
            cout << "Raiz cúbica de " << num2 << ": " << cbrt(num2) << endl;
            break;
        default:
            cout << "Opção inválida. Encerrando o programa." << endl;
    }

    return 0;
}