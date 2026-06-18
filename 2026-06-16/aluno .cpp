//Aula: Linguagem C++ - Classes e Objetos - POO - Programação Orientada a Objetos;
//Professora: Erika Dilly
//16/06/2024
#include <iostream>
#include <string>

using namespace std;

class Aluno {
  private:
    string nome;
    int idade;
    double nota;
  
  public:
    Aluno(string nome, int idade, double nota) : nome(nome), idade(idade), nota(nota) {}
    string getNome() const { return nome; }
    int getIdade() const { return idade; }
    double getNota() const { return nota; }
    
    void setNome(string novoNome) { 
      if (!novoNome.empty()) {
        nome = novoNome;
      } else {
        cout << "Nome não pode ser vazio!" << endl;
      }
    }
    void setIdade(int novaIdade) { 
      if (novaIdade >= 0 && novaIdade <= 120) {
        idade = novaIdade;
      } else {
        cout << "Idade inválida!" << endl;
      }
    }
    void setNota(double novaNota) { 
      if (novaNota >= 0 && novaNota <= 10) {
        nota = novaNota;
      } else {
        cout << "Nota deve ser entre 0 e 10!" << endl;
      }
    }
    void exibir() const {
      cout << "Nome: " << nome << endl;
      cout << "Idade: " << idade << endl;
      cout << "Nota: " << nota << endl;
    }
  };
    
  int main() {
    Aluno aluno1("Leonardo", 47, 7);
    Aluno aluno2("Vivian", 43, 5);

    aluno1.exibir();
    aluno2.exibir();

    return 0;
  };