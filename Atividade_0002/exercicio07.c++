//Faça um programa que receba o peso de uma pessoa, calcule e mostre:
//o novo peso, se a pessoa engordar 15% sobre o peso digitado;
//o novo peso, se a pessoa emagrecer 20% sobre o peso digitado

#include <iostream>

using namespace std;

int main(){
    float peso, peso1, peso2;    

        cout << "-------------------------------------" << endl;
        cout << "Projeção de Peso" << endl;
        cout << "-------------------------------------" << endl;

    cout << "Qual o peso deseja informar: ";
    cin >> peso;

    peso1 = peso + (peso*0.15);
    peso2 = peso - (peso*0.2);

    cout << "-------------------------------------" << endl;
    cout << "O peso informado em caso de engordar: " << peso1 << endl;
    cout << "O peso informado em caso de emagrecer: " << peso2 << endl;
    cout << "-------------------------------------" << endl;

    return 0;
}
