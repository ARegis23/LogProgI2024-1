//receba dois numeros
//execute as operações conforme lista
    //1 => media
    //2 => diferença do maior pelo menor
    //3 => produto
    //4 => divisão do primeiro pelo segundo
//conf escolha do usuário
//se a opçao for inválida
    //mostre msg de erro e encerre
//condicione a op 4 para !=0

#include <iostream>

using namespace std;

//função

//entrada de dados
int main(){
    float n1, n2;
    int op;

        cout << "---------------------------------------------" << endl;
        cout << " Escolha a operação desejada:" << endl;
        cout << " 1 - Media" << endl;
        cout << " 2 - Diferença" << endl;
        cout << " 3 - Produto" << endl;
        cout << " 4 - Divisão" << endl;
        cout << "---------------------------------------------" << endl;

    cout << "Escolha a operação conforme acima: ";
    cin >> op;

    cout << "Informe o primeiro número: ";
    cin >> n1;

    cout << "Informe o segundo número: ";
    cin >> n2;

//processamento
    switch (op){
        case 1:
            cout << "-----------------------------------------" << endl;
            cout << "O resultado é: " << (n1+n2)/2 << endl;
            cout << "-----------------------------------------" << endl;        
        break;

        case 2:
            if(n1 > n2){
            cout << "-----------------------------------------" << endl;
            cout << "O resultado é: " << n1 - n2 << endl;
            cout << "-----------------------------------------" << endl;
            } else if (n2 > n1) {
                cout << "-----------------------------------------" << endl;
                cout << "O resultado é: " << n2 - n1 << endl;
                cout << "-----------------------------------------" << endl; 
                }
        break;        


        case 3:
            cout << "-----------------------------------------" << endl;
            cout << "O resultado é: " << n1 * n2 << endl;
            cout << "-----------------------------------------" << endl;
        
        break;

        case 4:
            if(n2 != 0){
            cout << "-----------------------------------------" << endl;
            cout << "O resultado é: " << n1 / n2 << endl;
            cout << "-----------------------------------------" << endl;
            } else if (n2 == 0){
                cout << "------------------------------------------------------------" << endl;
                cout << "O resultado é: Erro! Divisão por 0. Vamos comecar de novo!" << endl;
                cout << "------------------------------------------------------------" << endl; 
                }
        break;

    default: // Lidando com uma opção inválida
    cout << "-----------------------------------------" << endl;
    cout << "Opção inválida!" << endl;
    cout << "-----------------------------------------" << endl;

    }

return 0;
}