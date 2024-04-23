#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int contador = 0, num, soma_pares = 0, soma_primos = 0;

    while (contador < 10) {
        cout << "Digite o número " << contador + 1 << ": ";
        cin >> num;

        // Calcula a soma dos números pares
        if (num % 2 == 0) {
            soma_pares += num;
        }

        // Calcula a soma dos números primos
        if (is_prime(num)) {
            soma_primos += num;
        }

        contador++;
    }

    // Mostra os resultados
    cout << "Soma dos números pares: " << soma_pares << endl;
    cout << "Soma dos números primos: " << soma_primos << endl;

    return 0;
}