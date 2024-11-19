#include <iostream>
using namespace std;
struct Morador
{
    string nome;
    int idade;
};

struct Apartamento {
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
    return 0;
}