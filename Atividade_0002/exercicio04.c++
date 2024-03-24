//Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas
//Considerando peso 2 para a primeira e peso 3 para a segunda

#include <iostream>

using namespace std;

//Função

float mponderada (float a, float b){
    return (2*a + 3*b)/5;
}

//Processamento
int main (){
    float a, b, result;

        cout << "-------------------------------------" << endl;
        cout << " Media ponderada das notas: " << endl;
        cout << "-------------------------------------" << endl;
        cout << "********************************************************" << endl;
        cout << " *Observação: A nota 1 tem peso 2, e a nota 2 peso 3*"  << endl;
        cout << "********************************************************" << endl;

    cout << "Digite a primeira nota: ";
    cin >> a;

    cout << "Digite a segunda nota: ";
    cin >> b;

    result = mponderada(a,b);

    cout << "-------------------------------------" << endl;
    cout << "Resultado é: " << result << endl;
    cout << "-------------------------------------" << endl;


    return 0;
}