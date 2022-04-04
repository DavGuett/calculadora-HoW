#include <iostream>

using namespace std;

int main()
{
    int opcao;
    int numero;
    cout << "Bem vindo! Escolha uma opção de conversão: " << endl;
    cout << "Opção 1 - Conversão Decimal para Binário" << endl;
    cout << "Opção 2 - Conversão Binário para Decimal" << endl;
    cin >> opcao;
    if (opcao == 1) {
        cout << "Você escolheu fazer a conversão de decimal para binário" << endl;
        cout << "Digite o número que deseja converter: " << endl;
        cin >> numero;
    } else if (opcao == 2) {
        cout << "Você escolheu fazer a conversão de binário para decimal" << endl;
        cout << "Digite o número que deseja converter: " << endl;
        cin >> numero;
    } else {
        cout << "Favor escolher entre as opções 1 e 2" << endl;
    }
    return 0;
}
