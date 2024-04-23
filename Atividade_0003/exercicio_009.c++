//receba o saldo medio
//calcule o valor de credito
    //salmedio > 400,00 = 30% salmedio
    //salmedio <= 400,00 && >300,00 = 25% salmedio
    //salmedio <= 300,00 && >200,00 = 20% salmedio
    //salmedio <= 200,00 = 10% salmedio


#include <iostream>

using namespace std;

int main() {
    float saldoMedio, valorCredito;

    cout << "Informe o saldo médio: ";
    cin >> saldoMedio;

    if (saldoMedio > 400.0) {
        valorCredito = saldoMedio * 0.3;
    } else if (saldoMedio <= 400.0 && saldoMedio > 300.0) {
        valorCredito = saldoMedio * 0.25;
    } else if (saldoMedio <= 300.0 && saldoMedio > 200.0) {
        valorCredito = saldoMedio * 0.2;
    } else {
        valorCredito = saldoMedio * 0.1;
    }

    cout << "O valor de crédito é: " << valorCredito << endl;

    return 0;
}
