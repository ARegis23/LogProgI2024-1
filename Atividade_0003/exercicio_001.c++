//Faça um programa que receba quatro notas de um aluno,
//calcule e mostre a média aritméticas das notas
//e a mensagem de aprovado ou reprovado, considerando para aprovação média 7

#include <iostream>

using namespace std;

//função

float media (float a, float b, float c, float d){
    return (a + b + c + d)/4;
}

//entrada de dados
int main(){
    float a, b, c, d, result;

        cout << "-------------------------------------" << endl;
        cout << " Média para 4 notas de um aluno " << endl;
        cout << "-------------------------------------" << endl;

    cout << "Digite a primeira nota: ";
    cin >> a;

    cout << "Digite a segunda nota: ";
    cin >> b;

    cout << "Digite a terceira nota: ";
    cin >> c;

    cout << "Digite a quarta nota: ";
    cin >> d;

//processamento

    result = media(a,b,c,d);
    
//saida de dados

    cout << "-------------------------------------" << endl;
    cout << "A média dele é: " << result << endl;
    cout << "-------------------------------------" << endl;

return 0;
}