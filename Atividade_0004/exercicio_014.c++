#include <iostream>
using namespace std;

int main() {
    int idade, opiniao;
    int contador = 0;
    int somaIdadeOtimo = 0;
    int qtdeRegular = 0;
    int qtdeBom = 0;
    int totalEspectadores = 15;

    while (contador < totalEspectadores) {
        cout << "Digite a idade do espectador " << contador + 1 << ": ";
        cin >> idade;

        cout << "Digite a opinião do espectador (ótimo = 3, bom = 2, regular = 1): ";
        cin >> opiniao;

        if (opiniao == 3) {
            somaIdadeOtimo += idade;
        } else if (opiniao == 1) {
            qtdeRegular++;
        } else if (opiniao == 2) {
            qtdeBom++;
        }

        contador++;
    }

    float mediaIdadeOtimo = 0;
    if (qtdeBom > 0) {
        mediaIdadeOtimo = static_cast<float>(somaIdadeOtimo) / qtdeBom;
    }

    float percentualBom = (static_cast<float>(qtdeBom) / totalEspectadores) * 100;

    cout << "Média das idades das pessoas que responderam ótimo: " << mediaIdadeOtimo << endl;
    cout << "Quantidade de pessoas que responderam regular: " << qtdeRegular << endl;
    cout << "Percentual de pessoas que responderam bom: " << percentualBom << "%" << endl;

    return 0;
}