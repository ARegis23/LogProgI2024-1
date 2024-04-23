//receba dois números e mostre o menor

#include <iostream>

using namespace std;

//entrada de dados
int main(){
    float n1, n2, result;

        cout << "------------------------------------------------" << endl;
        cout << " O menor entre os dois: " << endl;
        cout << "------------------------------------------------" << endl;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

//processamento

    if (n1 < n2){
        result = n1;
    } else if (n2 < n1){
            result = n2;     
        }

//saida de dados

    cout << "-------------------------------------" << endl;
    cout << "O menor entre eles é: " << result << endl;
    cout << "-------------------------------------" << endl;

return 0;
}