#include <iostream>
using namespace std;
struct Morador
{
    string nome;
    int idade;
};

struct Apartamento
{
    int numero;
    int andar;
    Morador moradores[2];
};

struct Bloco
{
    string nome;
    int qtdAndares;
    Apartamento apartamentos[3];
};

struct Condominio
{
    string endereco;
    string nome;
    Bloco blocos[3];
};

int main()
{
    Condominio condominioVar;

    cout << "Por favor preencha as informações abaixo" << endl
         << endl;
    cout << "Endereço do condomínio: ";
    cin >> condominioVar.endereco;
    cout << "Nome do condomínio: ";
    cin >> condominioVar.nome;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Identificação do bloco " << i + 1 << ": ";
        cin >> condominioVar.blocos[i].nome;
        cout << "Quantidade de andares do bloco " << i + 1 << ": ";
        cin >> condominioVar.blocos[i].qtdAndares;

        cout << endl
             << "Preencha as informações abaixo sobre os apartamentos do bloco" << endl
             << endl;

        for (int j = 0; j < 3; j++)
        {
            cout << "Número do " << j + 1 << "º apartamento: ";
            cin >> condominioVar.blocos[i].apartamentos[j].numero;
            cout << "Andar do " << j + 1 << "º apartamento: ";
            cin >> condominioVar.blocos[i].apartamentos[j].andar;

            cout << endl
                 << "Agora, preencha as informações sobre os moradores deste apartamento" << endl
                 << endl;
            for (int k = 0; k < 2; k++)
            {
                cout << "Nome do " << k + 1 << "º morador: ";
                cin >> condominioVar.blocos[i].apartamentos[j].moradores[k].nome;
                cout << "Idade do " << k + 1 << "º morador: ";
                cin >> condominioVar.blocos[i].apartamentos[j].moradores[k].idade;
            }
            cout << endl;
        }
    }

    // Saídas
    cout << endl
         << "Essas foram as informações obtidas:" << endl
         << endl;

    cout << "Endereço do condomínio: " << condominioVar.endereco << endl;
    cout << "Nome do condomínio: " << condominioVar.nome << endl
         << endl;

    cout << "Blocos" << endl;

    for (int x = 0; x < 3; x++)
    {
        cout << x + 1 << "º bloco: " << condominioVar.blocos[x].nome << endl;
        cout << "Quantidades de apartamento no bloco: " << condominioVar.blocos[x].qtdAndares << endl
             << endl;

        cout << "Informações dos apartamentos:" << endl;

        for (int y = 0; y < 3; y++)
        {
            cout << "Número do " << y + 1 << "º apartamento: " << condominioVar.blocos[x].apartamentos[y].numero << endl;
            cout << "Andar do " << y + 1 << "º apartamento: " << condominioVar.blocos[x].apartamentos[y].andar << endl
                 << endl;

            cout << "Informações dos moradores:" << endl;

            for (int z = 0; z < 2; z++)
            {
                cout << condominioVar.blocos[x].apartamentos[y].moradores[z].nome << " " << condominioVar.blocos[x].apartamentos[y].moradores[z].idade << " anos" << endl;
            }
            cout << endl;
        }
    }
    return 0;
}