//Faça um programa que receba duas notas,
//calcule e mostre media aritmética
//e mensagem se:
    //reprovado: media <3
    //exame: 3>= media < 7
    //aprovado: media >= 7

#include <iostream>

using namespace std;

//função

float media (float a, float b){
    return (a + b)/2;
}

//entrada de dados
int main(){
    float a, b, result;
    string aluno;

        cout << "------------------------------------------------" << endl;
        cout << " Média Aritmética para 2 notas de um aluno " << endl;
        cout << "------------------------------------------------" << endl;

    cout << "Digite a primeira nota: ";
    cin >> a;

    cout << "Digite a segunda nota: ";
    cin >> b;

//processamento

    result = media(a,b);
    
    if (result < 3){
        aluno = "Reprovado";
    } else if ((result >= 3) || (result < 7)){
            aluno = "Esta de exame";     
        } else if (result >= 7){
                aluno = "Aprovado";
            }    

//saida de dados

    cout << "-------------------------------------" << endl;
    cout << "A média dele é: " << result << endl;
    cout << "O aluno esta: " << aluno << endl;
    cout << "-------------------------------------" << endl;

return 0;
}