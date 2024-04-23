#include <iostream>
using namespace std;

int main() {
    int idade, contador = 0, pessoas_50_60 = 0, pessoas_altura_150 = 0;
    int pessoas_olhos_azuis = 0, pessoas_ruivas_sem_olhos_azuis = 0;
    float peso, altura, soma_idades_altura_150 = 0;
    char olhos, cabelos;

    while (contador < 6) {
        cout << "Digite a idade da pessoa " << contador + 1 << ": ";
        cin >> idade;

        cout << "Digite o peso da pessoa " << contador + 1 << " (em kg): ";
        cin >> peso;

        cout << "Digite a altura da pessoa " << contador + 1 << " (em metros): ";
        cin >> altura;

        cout << "Digite a cor dos olhos da pessoa " << contador + 1 << " (A, P, V ou C): ";
        cin >> olhos;

        cout << "Digite a cor dos cabelos da pessoa " << contador + 1 << " (P, C, L ou R): ";
        cin >> cabelos;

        // Verifica a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg
        if (idade > 50 && peso < 60) {
            pessoas_50_60++;
        }

        // Calcula a média das idades das pessoas com altura inferior a 1,50 m
        if (altura < 1.50) {
            soma_idades_altura_150 += idade;
            pessoas_altura_150++;
        }

        // Verifica a quantidade de pessoas com olhos azuis
        if (olhos == 'A') {
            pessoas_olhos_azuis++;
        }

        // Verifica a quantidade de pessoas ruivas e que não possuem olhos azuis
        if (cabelos == 'R' && olhos != 'A') {
            pessoas_ruivas_sem_olhos_azuis++;
        }

        contador++;
    }

    // Calcula a média das idades das pessoas com altura inferior a 1,50 m
    float media_idades_altura_150 = pessoas_altura_150 > 0 ? soma_idades_altura_150 / pessoas_altura_150 : 0;

    // Calcula a porcentagem de pessoas com olhos azuis
    float porcentagem_olhos_azuis = (pessoas_olhos_azuis / 6.0) * 100;

    // Mostra os resultados
    cout << "Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: " << pessoas_50_60 << endl;
    cout << "Média das idades das pessoas com altura inferior a 1,50 m: " << media_idades_altura_150 << " anos" << endl;
    cout << "Porcentagem de pessoas com olhos azuis: " << porcentagem_olhos_azuis << "%" << endl;
    cout << "Quantidade de pessoas ruivas e que não possuem olhos azuis: " << pessoas_ruivas_sem_olhos_azuis << endl;

    return 0;
}