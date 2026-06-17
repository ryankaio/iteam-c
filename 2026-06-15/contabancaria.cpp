//Aula 15/06/2026
//Professora: Erika Dilly
//Aluno: Ryan Kaio Sena da Silva

#include <iostream>
#include <string>

using namespace std;

class ContaBancaria{
    private:
        float saldo;
    public:
        string titular;
    ContaBancaria(string titular, float saldo){
        this -> titular = titular;
        this -> saldo = saldo;
    }
    void Sacar(float saque){
        if (saque >0 && saque<=saldo)
        {
            saldo = saldo - saque;
            cout << "\nSaque de " << saque << " efeituado com sucesso " << endl;
        }
        else{
            cout << "Saldo insuficiente ou valor invalido" << endl;
        }
        
    }

    void Depositar(float deposito){
        if(deposito>0){
        saldo = deposito + saldo;
        cout << "Deposito de " << deposito << " efeituado com sucesso" << endl;
        }
    }

    void Transferir(ContaBancaria &destino, float valor){
        if(valor > 0 && saldo>=valor){
            saldo = saldo - valor;
            destino.saldo = destino.saldo + valor;
            cout << "Transferncia de " << valor << " efeituada com sucesso" << endl;
        }
        else{
            cout << "Saldo insuficiente ou valor invalido" << endl;
        }
    }

    void extrato(){
        cout << "Titular da conta: " << titular << endl;
        cout << "Saldo em conta: " << saldo << endl;
    }
};

int main(){
    ContaBancaria c1("Ryan Sena", 2000);
    c1.extrato();
    c1.Sacar(100);
    c1.extrato();
    cout << "\n==================================\n" << endl;
    ContaBancaria c2("Ana Clara", 1000);
    c2.extrato();
    c2.Depositar(300);
    c2.extrato();
    cout << "\n==================================\n" << endl;
    c1.Transferir(c2 , 300);
    c1.extrato();
    cout << "\n==================================\n" << endl;
    c2.extrato();

    return 0;
}
