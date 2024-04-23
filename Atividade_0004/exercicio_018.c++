#include <iostream>
#include <limits> // Para usar numeric_limits
using namespace std;

int main() {
    int idade;
    char sexo;
    double salario;
    double somaSalarios = 0;
    double menorSalario = numeric_limits<double>::max(); // Inicializa com o maior valor possível
    int maiorIdade = -1; // Inicializa com um valor inválido
    int menorIdade = numeric_limits<int>::max(); // Inicializa com o maior valor possível
    int mulheresSalarioAte200 = 0;
    int menorSalarioIdade;
    char menorSalarioSexo;

    cout << "Digite a idade, o sexo (M/F) e o salário (digite uma idade negativa para encerrar):" << endl;

    // Entrada de dados
    while (true) {
        cout << "Idade: ";
        cin >> idade;

        if (idade < 0) {
            break;
        }

        cout << "Sexo (M/F): ";
        cin >> sexo;

        cout << "Salário: R$";
        cin >> salario;

        // Atualiza a soma dos salários
        somaSalarios += salario;

        // Verifica se a idade é a maior ou a menor
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }

        // Conta a quantidade de mulheres com salário até R$ 200,00
        if (sexo == 'F' && salario <= 200.00) {
            mulheresSalarioAte200++;
        }

        // Verifica se o salário é o menor
        if (salario < menorSalario) {
            menorSalario = salario;
            menorSalarioIdade = idade;
            menorSalarioSexo = sexo;
        }
    }

    // Verifica se foram inseridos dados
    if (menorIdade != numeric_limits<int>::max()) {
        // Calcula a média dos salários
        double mediaSalarios = somaSalarios / (maiorIdade - menorIdade + 1);

        // Exibe os resultados
        cout << "Média dos salários: R$" << mediaSalarios << endl;
        cout << "Maior idade: " << maiorIdade << " anos" << endl;
        cout << "Menor idade: " << menorIdade << " anos" << endl;
        cout << "Mulheres com salário até R$ 200,00: " << mulheresSalarioAte200 << endl;
        cout << "Pessoa com menor salário: Idade: " << menorSalarioIdade << " Sexo: " << menorSalarioSexo << endl;
    } else {
        cout << "Nenhum dado foi inserido." << endl;
    }

    return 0;
}