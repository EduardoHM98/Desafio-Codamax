#ifndef COZINHA_H
#define COZINHA_H
#include "ingrediente.h"
#include "cstdlib"
#include "vector"

using namespace std;

class Cozinha
{
public: //Funções construtoras e métodos que permitem interagir com objeto podem ser acessados fora da classe.
    Cozinha(); //Construtor nulo.
    Cozinha(int,int,string,string); //Construtor não-nulo.
    //Definindo funções "set" (escrever em atributos).
    void setHora_Abertura(int);
    void setHora_Fechamento(int);
    void setNome_Cozinha(string);
    void setPrato_Principal(string);
    //Definindo funções "get" (ler atributos).
    int getHora_Abertura();
    int getHora_Fechamento();
    string getNome_Cozinha();
    string getPrato_Principal();

    void adicionar_Ingrediente(string,int,int,int);
    void getIngredientes(int);
    int contar_Ingredientes();

private: //Atributos só devem ser acessados pela própria classe.
    int Hora_Abertura;
    int Hora_Fechamento;
    string Nome_Cozinha;
    string Prato_Principal;
    ::std::vector<Ingrediente> Ingredientes;
};

//Construtor que não recebe parâmetros (nulo).
Cozinha::Cozinha()
{
    setHora_Abertura(0);
    setHora_Fechamento(0);
    setNome_Cozinha("");
    setPrato_Principal("");
}

//Construtor que recebe parâmetros.
Cozinha::Cozinha(int a, int f, string n, string p)
{
    setHora_Abertura(a);
    setHora_Fechamento(f);
    setNome_Cozinha(n);
    setPrato_Principal(p);
}

void Cozinha::setHora_Abertura(int h)
{
    Hora_Abertura = h;
    return;
}

void Cozinha::setHora_Fechamento(int h)
{
    Hora_Fechamento = h;
    return;
}

void Cozinha::setNome_Cozinha(string n)
{
    Nome_Cozinha = n;
    return;
}

void Cozinha::setPrato_Principal(string p)
{
    Prato_Principal = p;
    return;
}

int Cozinha::getHora_Abertura()
{
    return Hora_Abertura;
}

int Cozinha::getHora_Fechamento()
{
    return Hora_Fechamento;
}

string Cozinha::getNome_Cozinha()
{
    return Nome_Cozinha;
}

string Cozinha::getPrato_Principal()
{
    return Prato_Principal;
}

//Função que acrescenta novo objeto ao vetor.
void Cozinha::adicionar_Ingrediente(string n, int d, int m, int y)
{
    int i = contar_Ingredientes();
    Ingredientes.resize(i+1); //Utilizando função 'resize()' da biblioteca <vector>.
    Ingredientes[i].setNome(n);
    Ingredientes[i].setData_Validade(d,m,y);
}

//Função que imprime atributos do vetor de objetos 'Ingredientes' (posição 'i').
void Cozinha::getIngredientes(int i)
{
    struct tm buffer; //Variável temporária que recebe struct 'tm'.
    buffer = Ingredientes[i].getData_Validade();
    cout << Ingredientes[i].getNome() << ", " <<  buffer.tm_mday << "/" << buffer.tm_mon << "/" << buffer.tm_year << endl;
}

//Função que retorna tamanho atual do vetor.
int Cozinha::contar_Ingredientes()
{
    return Ingredientes.size(); //Utilizando função 'size()' da biblioteca <vector>.
}

#endif // COZINHA_H
