#include <iostream>

using namespace std;

int main()
{
    int opcao;
    int numero;
    cout << "Bem vindo! Escolha uma op��o de convers�o: " << endl;
    cout << "Op��o 1 - Convers�o Decimal para Bin�rio" << endl;
    cout << "Op��o 2 - Convers�o Bin�rio para Decimal" << endl;
    cin >> opcao;
    if (opcao == 1) {
        cout << "Voc� escolheu fazer a convers�o de decimal para bin�rio" << endl;
        cout << "Digite o n�mero que deseja converter: " << endl;
        cin >> numero;
    } else if (opcao == 2) {
        cout << "Voc� escolheu fazer a convers�o de bin�rio para decimal" << endl;
        cout << "Digite o n�mero que deseja converter: " << endl;
        cin >> numero;
    } else {
        cout << "Favor escolher entre as op��es 1 e 2" << endl;
    }
    return 0;
}
