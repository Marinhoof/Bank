#include <iostream>

using namespace std;

class User {
    public:
    double saldo = 5000;
};


void mainMenu(){
    cout << "Bem vindo ao Banco";
    cout << "\n\nSelecione a opcao desejada\n";
    cout << "1.Entrar\n";
    cout << "2.Registro\n"; // not functional
    cout << "3.Sair\n";
}

int main(){

    int opcao, operacao;
    double saque, deposito;

    User obj;
    obj.saldo;

    double *ptrSaldo = &obj.saldo;
    
    mainMenu();
    cin >> opcao;

    do
    {
        switch (opcao)
        {
            
                case 1: cout << "\nQual operacao deseja realizar\n1.Saque\t\t2.Deposito\n3.Saldo\t\t4.Sair\n" << endl; cin >> operacao;
                switch (operacao)
                {
                case 1: cout << "Insira o valor de saque: R$ " ; cin >> saque;
                *ptrSaldo -= saque;
                cout << "Seu saldo atual e R$ " << *ptrSaldo;
                }
                switch (operacao){
                    case 2: cout << "Insira o valor de deposito: R$ "; cin >> deposito;
                    *ptrSaldo += deposito;
                    cout << "Seu saldo atual e R$ " << *ptrSaldo;
                }
                switch (operacao){
                case 3: cout << "Seu saldo e R$ "<< *ptrSaldo;
                }
                default:
                    break;
            

        }
    } while (operacao!=4);
    
}

