// Faça um programa que receba o preço de um produto, calcule e mostre o novo preço
// sabendo-se que este sofreu um desconto de 10%

#include <iostream>

using namespace std;

//Função
float desconto10(float a){
    return (a - (a*0,1));
}

int main (){
    float a, result;

        cout << "--------------------------------" << endl;
        cout << "Preço do Produto" << endl;
        cout << "--------------------------------" << endl;

    cout << " Qual o preço do produto: ";
    cin >> a;

    result = desconto10(a);

    cout << "-------------------------------------" << endl;
    cout << " O preço com 10% de desconto é: " << result << endl;
    cout << "-------------------------------------" << endl;


    return 0;
}