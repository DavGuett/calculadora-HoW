// Calculadora de Conversão Binária HoW I
// David Jeziel de Almeida Guetten.

#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    bool executar = true;
    int opcao;
    int numeroDecimal = 0;
    int numeroBinario = 0;

    // Loop while para o programa continuar rodando até o usuário escolher a opção de parada
    while (executar) {
    setlocale(LC_ALL, "Portuguese");
    cout << "Bem vindo! Escolha uma opção de conversão: " << endl;
    cout << "Opção 1 - Conversão Decimal para Binário" << endl;
    cout << "Opção 2 - Conversão Binário para Decimal" << endl;
    cout << "Opção 3 - Sair" << endl;
    cin >> opcao;
    if (opcao == 1) {
        int numeroBinario[8];
        cout << "Voce escolheu fazer a conversão de decimal para binário" << endl;
        cout << "Digite o número que deseja converter: " << endl;
        cin >> numeroDecimal;

        // Loop for que roda enquanto a variável i for maior ou igual a zero
        for(int i = 7; i >= 0; i--) {
            // condicional que atribui 0 ao índice do loop caso o decimal seja divisível por 2 e 1 caso contrário
            if(numeroDecimal % 2 == 0){
                numeroBinario[i] = 0;
            } else {
                numeroBinario[i] = 1;
            }
            numeroDecimal = numeroDecimal / 2;
        }
        cout << "O número em binário é: ";
        // Loop for para reconstruir o número binário corretamente
        for(int i = 0; i < 8; i++) {
            cout << numeroBinario[i];
        }
        cout << endl;
    } else if (opcao == 2) {
        cout << "Voce escolheu fazer a conversão de binário para decimal" << endl;
        cout << "Digite o número que deseja converter: " << endl;
        cin >> numeroBinario;
        // Loop for que faz o número decimal receber ele elevado a potência do seu índice e soma com o módulo de 10 do número binário
        for (int i = 0; numeroBinario > 0; i++) {
            numeroDecimal = numeroDecimal + pow(2, i) * (numeroBinario % 10);
            numeroBinario = numeroBinario / 10;
        }
        cout << numeroDecimal << endl;
        cout << "O número em decimal é: " << numeroDecimal << endl;
    } else if (opcao == 3) {
        cout << "Voce escolheu sair..." << endl;
        executar = false;
        exit;
    }
    // Ocorre caso o usuário escolha uma opção inválida.
     else {
        cout << "Favor escolher uma opção válida" << endl;
    }
    }
    return 0;
}
