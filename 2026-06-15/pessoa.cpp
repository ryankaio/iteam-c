//Aula 15/06/2026
//Professora: Erika Dilly
//Aluno: Ryan Kaio Sena da Silva
#include <iostream>
#include <string>

using namespace std;

class Pessoa{
    
public:
    int idade;
    string nome;
    Pessoa(string nome, int idade) : nome(nome), idade(idade){}
    void mostrar(){
        cout << "idade: " << idade << endl;
        cout << "nome: " << nome << endl;
    }
};

int main(){
    cout << "Primeira pessoa:" << endl;
    Pessoa P1("Ryan" , 17);
    P1.mostrar();

    cout << "Segunda pessoa:" << endl;
    Pessoa P2("Ana" , 20);
    P2.mostrar();
    return 0;
}