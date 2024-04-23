//receba o preco, a categoria e situacao
    //categoria: 1 - limpeza 2 - alimentacao 3 - vestuario
    //situacao: r - necessita refrigeracao n - nao necessita de refrigercao
//calucle e mostre
    //o valor de aumento (conf tabela)
    //o valor do imposto (conf tabela)
    //novo preco (np = (p + aumento) -imposto)
    //classificacao (conf tabela)

#include <iostream>

using namespace std;

int main (){
    float preco, perAum, Imp, NPreco;
    int cat;
    string sit, clas;

        cout << "-------------------------------------" << endl;
        cout << " Produtos, Preços e Imposto " << endl;
        cout << "-------------------------------------" << endl;
    
    cout << " Informe o preço do produto: ";
    cin >> preco;

    
    cout << " Informe a categoria do produto: " << endl;
    cout << " 1 - Limpeza " << endl;
    cout << " 2 - Alimentação " << endl;
    cout << " 3 - Vestuário " << endl;
    cout << " Digite o codigo: ";
    cin >> cat;

    cout << " Informe a situação: " << endl;
    cout << " R - Necessita de Refrigeração " << endl;
    cout << " N - Não Necessita de Refrigeração " << endl;
    cout << " Digite o codigo: ";
    cin >> sit;

//Processando
//O valor do aumento

    if (preco <= 25.00){
        if (cat == 1){
            perAum = preco*0.05;
        } else if (cat == 2){
                perAum = preco*0.08;
            } else if (cat == 3) {
                    perAum = preco*0.10;
                }
    } else if (preco > 25.00){
        if (cat == 1){
            perAum = preco*0.12;
        } else if (cat == 2){
                perAum = preco*0.15;
            } else if (cat == 3){
                    perAum = preco*0.18;
                }
    }

//valor do imposto

    if((cat == 2) || (sit == "R" || sit == "r")){
        Imp = preco*0.05;
    } else {
        Imp = preco*0.08;
    }

//novo preco

    NPreco = preco + perAum + Imp;

//classifica do preco
    
    if (NPreco <= 50.00){
        clas = " Barato ";
    } else if (NPreco > 50.00 && NPreco < 120.00){
            clas = " Normal ";
        } else if (NPreco >= 120.00){
                clas = " Caro ";
            }

//saida de dados
    cout << "-------------------------------------" << endl;
    cout << " O valor de aumento no preço é: $" << perAum << endl;
    cout << " O valor do imposto é: $" << Imp << endl;
    cout << " O novo preço é: $" << NPreco << endl;
    cout << " Sua classificação é: " << clas << endl;
    cout << "-------------------------------------" << endl;

return 0;
}