//Faça um programa que receba três números, calule e mostre a multiplicação desses números.

#include <iostream>

using namespace std;

//Função

float multiplicacao (float a, float b, float c){
    return a * b * c;
}

//Processamento
int main (){
    float a, b, c, result;

        cout << "-------------------------------------" << endl;
        cout << " Multiplicação de 3 n: " << endl;
        cout << "-------------------------------------" << endl;

    cout << "Digite o primeiro número: ";
    cin >> a;

    cout << "Digite o segundo número: ";
    cin >> b;

    cout << "Digite o terceiro número: ";
    cin >> c;

    result = multiplicacao(a,b,c);

    cout << "-------------------------------------" << endl;
    cout << "Resultado é: " << result << endl;
    cout << "-------------------------------------" << endl;


    return 0;
}