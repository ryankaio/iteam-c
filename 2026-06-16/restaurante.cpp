#include <iostream>
#include <string>
#include <list>

using namespace std;

class Restaurante
{
private:
    string nome;
    list<string> cardapio;

public:
    Restaurante(string n) : nome(n) {}
    string getNome() const { return nome; }
    void setNomo(string novonome)
    {
        if (!novonome.empty())
        {
            nome = novonome;
        }
        else
        {
            cout << "Nao pode ser vazio" << endl;
        }
    }
    void adicionarPrato(string prato)
    {
        if (!prato.empty())
        {
            cardapio.push_back(prato);
        }
    }
    void listarcardapio()
    {
        for (string prato : cardapio)
        {
            cout << prato << endl;
        }
    }
    bool existePrato(string prato)
    {
        for (string item : cardapio)
        {
            if (prato == item)
            {
                return true;
            }   
        }
        return false;
    }
    void atenderliente(string nomecliente, string prato)
    {
        if (existePrato(prato))
        {
            cout << nomecliente << ", seu prato " << prato << " foi confirmado." << endl;
        }
        else
        {
            cout << "nao possuimos esse prato em nosso cardapio." << endl;
        }
    }
};

int main()
{
    Restaurante r("Sabor Caseiro");

    int opcao;

    do
    {
        cout << "\n1 - Adicionar prato\n";
        cout << "2 - Listar cardapio\n";
        cout << "3 - Mostrar nome\n";
        cout << "4 - Atender cliente\n";
        cout << "0 - Sair\n";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        {
            string prato;
            cout << "\nDigite um prato: ";
            cin.ignore();
            getline(cin,prato);
            r.adicionarPrato(prato);

            break;
        }
        case 2:
            r.listarcardapio();

            break;
        case 3:

            cout << "\nRestaurante " << r.getNome() << endl;

            break;
        case 4:
            {string nome;
            cout << "\nInforme seu nome: " << endl;
            cin >> nome;
            cin.ignore(1000, '\n');

            cout << "Qual prato voce deseja? " << endl;
            string prato;
            getline(cin,prato);
            r.atenderliente(nome , prato);

            break;
            }
        case 0:
            
            cout << "\nEncerrando..." << endl;

            break;

        default:
            cout << "\nOpcao invalida.." << endl;
        }
    } while (opcao != 0);
}