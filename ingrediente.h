#ifndef INGREDIENTE_H
#define INGREDIENTE_H
#include <string.h>
#include <ctime>

using namespace std;

class Ingrediente
{
public: //Funções construtoras e métodos que permitem interagir com objeto podem ser acessados fora da classe.
    Ingrediente(); //Construtor nulo.
    //Definindo funções "set" (escrever em atributos).
    void setNome(string);
    void setData_Validade(int,int,int);
    //Definindo funções "get" (ler atributos).
    string getNome();
    tm getData_Validade();

private: //Atributos só devem ser acessados pela própria classe.
    string Nome;
    struct tm Data_Validade;

};

//Construtor que não recebe parâmetros (nulo).
Ingrediente::Ingrediente()
{
    setNome("");
    setData_Validade(0,0,0);
}

void Ingrediente::setNome(string n)
{
    Nome = n;
    return;
}

void Ingrediente::setData_Validade(int d, int m, int y)
{
    Data_Validade.tm_mday = d;
    Data_Validade.tm_mon = m;
    Data_Validade.tm_year = y;
}

string Ingrediente::getNome()
{
    return Nome;
}

//Retorna struct tipo 'tm', definida na biblioteca <ctime>.
tm Ingrediente::getData_Validade()
{
    return Data_Validade;
}


#endif // INGREDIENTE_H
