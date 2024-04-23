//receba três números e mostre o maior

#include <iostream>

using namespace std;

//entrada de dados
int main(){
    float n1, n2, n3, result;

        cout << "------------------------------------------------" << endl;
        cout << " O menor entre os dois: " << endl;
        cout << "------------------------------------------------" << endl;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "Digite o terceiro numero: ";
    cin >> n3;

//processamento

    if (n1 <= n2 && n1 <= n3){
        result = n1;
    } else if (n2 <= n1 && n2 <= n3){
            result = n2;     
        }else {
                result = n3;     
                } 

//saida de dados

    cout << "-------------------------------------" << endl;
    cout << "O menor entre eles é: " << result << endl;
    cout << "-------------------------------------" << endl;

return 0;
}