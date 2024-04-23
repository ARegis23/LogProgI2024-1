//Receba:
    //codigo do produto
    //quantidade comprada
//calcule e mostre:
    //o preco unitario do produto
    //o preco total da nota
    //valor do desconto sobre o preco total
    //o preco final depois do desconto


#include <iostream>

using namespace std;

int main (){
    float cdPrd, qtdPrd, $Prd, result1, desc, result2;

        cout << "-------------------------------------" << endl;
        cout << " Nota de Compras " << endl;
        cout << "-------------------------------------" << endl;
    
    cout << " Informe o codigo do produto: ";
    cin >> cdPrd;

    cout << " Informe a quantidade comprada: ";
    cin >> qtdPrd;

//Processando preco do produto

    if (cdPrd >=1 && cdPrd <=10){
        $Prd = 10.00;
    } else if (cdPrd >=11 && cdPrd <=20){
            $Prd = 15.00;
        } else if (cdPrd >=21 && cdPrd <=30){
                $Prd = 20.00;
            } else if (cdPrd >=31 && cdPrd <=40){
                    $Prd = 30.00;
                }

//total da nota

    result1 = $Prd * qtdPrd;

//desconto da nota

    if (result1 <250.00){
        desc = result1 - (result1 *0.95) ;
    } else if (result1 >=250.00 && result1 <=500.00){
            desc = result1 - (result1*0.90);
        } else if (result1 >500.00){
                desc = result1 - (result1*0.85);
            }

//preco final

    result2 = result1 - desc;

//saida de dados
    cout << "-------------------------------------" << endl;
    cout << " O preço unitário do produto é: " << cdPrd << endl;
    cout << " O preço total da nota: " << result1 << endl;
    cout << " O preço do desconto é: " << desc << endl;
    cout << " O preço final da nota é:  " << result2 << endl;
    cout << "-------------------------------------" << endl;

return 0;
}