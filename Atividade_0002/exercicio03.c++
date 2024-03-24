//Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo
//Sabe-se que o segundo número nao pode ser zero, portanto, não é necessário se preocupar com validações.

#include <iostream>

using namespace std;

//Função

float divisao (float a, float b){
    return a / b;
}

//Processamento
int main (){
    float a, b, result;

        cout << "-------------------------------------" << endl;
        cout << " Divisão: " << endl;
        cout << "-------------------------------------" << endl;

    cout << "Digite o primeiro número: ";
    cin >> a;

    cout << "Digite o segundo número (exceto 0): ";
    cin >> b;

    result = divisao(a,b);

    cout << "-------------------------------------" << endl;
    cout << "Resultado é: " << result << endl;
    cout << "-------------------------------------" << endl;


    return 0;
}