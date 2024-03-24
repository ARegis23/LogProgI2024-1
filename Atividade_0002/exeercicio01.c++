//Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo

#include <iostream>

using namespace std;

//Função

float substracao (float a, float b){
    return a - b;
}

//Processamento
int main (){
    float a, b, result;

        cout << "-------------------------------------" << endl;
        cout << " Subtração: " << endl;
        cout << "-------------------------------------" << endl;

    cout << "Digite o primeiro número: ";
    cin >> a;

    cout << "Digite o segundo número: ";
    cin >> b;

    result = substracao(a,b);

    cout << "-------------------------------------" << endl;
    cout << "Resultado é: " << result << endl;
    cout << "-------------------------------------" << endl;


    return 0;
}