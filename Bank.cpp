#include <iostream>

using namespace std;


int sub (int a, int b){
    int saldoSaque;
    saldoSaque=a-b;
    return (saldoSaque);
}

int add (int a, int b){
    int saldoSaque;
    saldoSaque=a+b;
    return (saldoSaque);
}

int main(){
    int saldo = 5000;
    int saque,deposito ,opcao ,operacao ,calc ;

    cout << "Bem vindo ao Banco";
    cout << "\n\nSelecione a opcao desejada\n";
    cout << "1.Entrar\n";
    cout << "2.Registro\n"; // not functional
    cout << "3.Sair\n";
    cin >> opcao;

    if (opcao==1){
        cout << "Qual operacao deseja realizar\n1.Saque\n2.Deposito\n3.Sair\n"; cin >> operacao;
        if (operacao==1){
            cout << "Insira o valor de saque: "; cin >> saque;
            calc = sub(saldo, saque);
            cout << "Saldo atual e : " << calc;   
        }

        else if (operacao==2){
            cout << "Insira o valor de deposito: "; cin >> deposito;
            calc = add(saldo, deposito);
            cout << "Saldo atual e: " << calc;

        }
    }
}