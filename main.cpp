// Calculadora de Conversão Binária HoW I
// David Jeziel de Almeida Guetten.

#include <iostream>

using namespace std;

int main()
{
    bool executar = true;
    int opcao;
    int numero;
    while (executar) {
    cout << "Bem vindo! Escolha uma opção de conversão: " << endl;
    cout << "Opção 1 - Conversão Decimal para Binário" << endl;
    cout << "Opção 2 - Conversão Binário para Decimal" << endl;
    cout << "Opção 3 - Sair" << endl;
    cin >> opcao;
    if (opcao == 1) {
        cout << "Você escolheu fazer a conversão de decimal para binário" << endl;
        cout << "Digite o número que deseja converter: " << endl;
        cin >> numero;
    } else if (opcao == 2) {
        cout << "Você escolheu fazer a conversão de binário para decimal" << endl;
        cout << "Digite o número que deseja converter: " << endl;
        cin >> numero;
    } else if (opcao == 3) {
        cout << "Você escolheu sair..." << endl;
        executar = false;
    }
    }

    return 0;
}
