//receba:
    //horas extras
    //horas de falta
//calcule H
    //H = num de horas extras - (2/3*(num de horas falta))
//Premio
    //H >=2400 = 500
    //H >1800 && <2400 = 400
    //H >=1200 && <1800 = 300
    //H >=600 && <1200 = 200
    //H <600 = 100

#include <iostream>

using namespace std;

int main() {
    int horasExtras, horasFalta;
    float H;
    int premio;

    // Solicita ao usuário que informe o número de horas extras e o número de horas de falta
    cout << "Informe o número de horas extras: ";
    cin >> horasExtras;

    cout << "Informe o número de horas de falta: ";
    cin >> horasFalta;

    // Calcula o valor de H com base no número de horas extras e no número de horas de falta
    H = horasExtras - (2.0/3.0 * horasFalta);

    // Determina o prêmio correspondente com base no valor de H
    if (H >= 2400) {
        premio = 500;
    } else if (H > 1800 && H < 2400) {
        premio = 400;
    } else if (H >= 1200 && H < 1800) {
        premio = 300;
    } else if (H >= 600 && H < 1200) {
        premio = 200;
    } else {
        premio = 100;
    }

    // Exibe o valor de H e o prêmio correspondente
    cout << "Valor de H: " << H << endl;
    cout << "Prêmio: " << premio << endl;

    return 0;
}
