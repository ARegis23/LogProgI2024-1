#include <iostream>
#include <iomanip> // Para formatação de saída
using namespace std;

int main() {
    int voto, totalVotos = 0;
    int votosCandidatos[4] = {0}; // Inicializa o array de votos para os candidatos com zeros
    int votosNulos = 0, votosBrancos = 0;

    cout << "Digite os votos (1 a 4 para candidatos, 5 para voto nulo, 6 para voto em branco):" << endl;

    // Loop para receber os votos até que seja digitado 0
    while (true) {
        cout << "Voto: ";
        cin >> voto;

        if (voto == 0) {
            // Finaliza a entrada de votos
            break;
        } else if (voto >= 1 && voto <= 4) {
            // Voto válido para um dos candidatos
            votosCandidatos[voto - 1]++; // Incrementa o contador de votos para o candidato correspondente
            totalVotos++;
        } else if (voto == 5) {
            // Voto nulo
            votosNulos++;
            totalVotos++;
        } else if (voto == 6) {
            // Voto em branco
            votosBrancos++;
            totalVotos++;
        } else {
            // Código inválido
            cout << "Código de voto inválido! Por favor, digite novamente." << endl;
        }
    }

    // Mostra os resultados
    cout << "\nResultados da eleição:\n";
    cout << "======================\n";
    cout << "Total de votos para cada candidato:\n";
    for (int i = 0; i < 4; ++i) {
        cout << "Candidato " << (i + 1) << ": " << votosCandidatos[i] << " votos" << endl;
    }
    cout << "Total de votos nulos: " << votosNulos << " votos" << endl;
    cout << "Total de votos em branco: " << votosBrancos << " votos" << endl;

    // Calcula e mostra as porcentagens
    double porcentagemNulos = (static_cast<double>(votosNulos) / totalVotos) * 100.0;
    double porcentagemBrancos = (static_cast<double>(votosBrancos) / totalVotos) * 100.0;
    cout << fixed << setprecision(2); // Configura a saída para mostrar duas casas decimais
    cout << "Porcentagem de votos nulos sobre o total de votos: " << porcentagemNulos << "%" << endl;
    cout << "Porcentagem de votos em branco sobre o total de votos: " << porcentagemBrancos << "%" << endl;

    return 0;
}