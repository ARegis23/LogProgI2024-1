#include <iostream>
using namespace std;

int main() {
    int opcao;
    double nota1, nota2, nota3;
    double peso1, peso2, peso3;
    double mediaAritmetica, mediaPonderada;

    // Loop para exibir o menu e receber opções até que o usuário escolha sair (opção 3)
    while (true) {
        // Exibe o menu de opções
        cout << "Menu de opções:" << endl;
        cout << "1. Média aritmética" << endl;
        cout << "2. Média ponderada" << endl;
        cout << "3. Sair" << endl;
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        // Verifica a opção escolhida
        switch (opcao) {
            case 1:
                // Opção para calcular média aritmética
                cout << "Digite a primeira nota: ";
                cin >> nota1;
                cout << "Digite a segunda nota: ";
                cin >> nota2;
                // Calcula a média aritmética
                mediaAritmetica = (nota1 + nota2) / 2;
                // Mostra o resultado
                cout << "A média aritmética é: " << mediaAritmetica << endl;
                break;

            case 2:
                // Opção para calcular média ponderada
                cout << "Digite a primeira nota: ";
                cin >> nota1;
                cout << "Digite o peso da primeira nota: ";
                cin >> peso1;
                cout << "Digite a segunda nota: ";
                cin >> nota2;
                cout << "Digite o peso da segunda nota: ";
                cin >> peso2;
                cout << "Digite a terceira nota: ";
                cin >> nota3;
                cout << "Digite o peso da terceira nota: ";
                cin >> peso3;
                // Calcula a média ponderada
                mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
                // Mostra o resultado
                cout << "A média ponderada é: " << mediaPonderada << endl;
                break;

            case 3:
                // Opção para sair do programa
                cout << "Saindo do programa..." << endl;
                return 0; // Termina o programa

            default:
                // Opção inválida
                cout << "Opção inválida! Digite novamente." << endl;
        }
    }

    return 0;
}