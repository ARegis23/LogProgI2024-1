//verifique a validade de uma senha
    //senha:4531
    //permissao de acesso ou nao

#include <iostream>

using namespace std;

int main() {
    string senhaDigitada = "4531";
    string senhaUsuario;

    // Solicita ao usuário que digite a senha
    cout << "Digite a senha: ";
    cin >> senhaUsuario;

    // Verifica se a senha digitada pelo usuário é igual à senha definida
    if (senhaUsuario == senhaDigitada) {
        cout << "Acesso concedido!" << endl;
    } else {
        cout << "Acesso negado!" << endl;
    }

    return 0;
}