#include <iostream>
using namespace std;

int main() {
    int numero = 1;

    // Loop para percorrer os números de 1 a 10
    while (numero <= 10) {
        cout << "Tabuada do " << numero << ":" << endl;
        
        // Loop para calcular e mostrar a tabuada do número atual
        int contador = 1;
        while (contador <= 10) {
            cout << numero << " x " << contador << " = " << numero * contador << endl;
            contador++;
        }
        
        // Aumenta o número para passar para a próxima tabuada
        numero++;
        cout << endl; // Adiciona uma linha em branco entre as tabuadas
    }

    return 0;
}