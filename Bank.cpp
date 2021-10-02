#include <iostream>

using namespace std;

class User {
    public:
    double saldo = 5000, saque, deposito;;
    int opcao,operacao;
};


void mainMenu(){
    cout << "Bem vindo ao Banco";
    cout << "\n\nSelecione a opcao desejada\n";
    cout << "1.Entrar\n";
    cout << "2.Registro\n"; // not functional
    cout << "3.Sair\n";
}

int main(){

    User obj, obj1;
    obj.saldo; obj1.opcao, obj1.operacao,obj1.saque, obj1.deposito ;

    double *ptrSaldo = &obj.saldo, *ptrSaque = &obj1.saque, *ptrDeposito = &obj1.deposito;
    int  *ptrOpcao = &obj1.opcao, *ptrOperacao = &obj1.operacao;
    
    mainMenu();
    cin >> *ptrOpcao;

    do
    {
        switch (*ptrOpcao)
        {
            
                case 1: cout << "\nQual operacao deseja realizar\n1.Saque\t\t2.Deposito\n3.Saldo\t\t4.Sair\n" << endl; cin >> *ptrOperacao;
                switch (*ptrOperacao)
                {
                case 1: cout << "Insira o valor de saque: R$ " ; cin >> *ptrSaque;
                *ptrSaldo -= *ptrSaque;
                cout << "Seu saldo atual e R$ " << *ptrSaldo;
                }
                switch (*ptrOperacao){
                    case 2: cout << "Insira o valor de deposito: R$ "; cin >> *ptrDeposito;
                    *ptrSaldo += *ptrDeposito;
                    cout << "Seu saldo atual e R$ " << *ptrSaldo;
                }
                switch (*ptrOperacao){
                case 3: cout << "Seu saldo e R$ "<< *ptrSaldo;
                }
                default:    
                    break;
            

        }
    } while (*ptrOperacao!=4);
    
}

