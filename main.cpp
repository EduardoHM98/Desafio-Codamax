//Autor: Eduardo H. Mendel
//Data: 22/01/2022
//Título: "Desafio Codamax"

#include <iostream>
#include "cozinha.h"

using namespace std;

int main()
{
    //Instanciando objeto Cozinha1 usando construtor nulo.
    Cozinha Cozinha1;
    Cozinha1.setHora_Abertura(14);
    Cozinha1.setHora_Fechamento(20);
    Cozinha1.setNome_Cozinha("Cozinha Mineira");
    Cozinha1.setPrato_Principal("Feijoada");
    Cozinha1.adicionar_Ingrediente("Feijao",22,02,2022);
    Cozinha1.adicionar_Ingrediente("Farinha",23,02,2022);
    Cozinha1.adicionar_Ingrediente("Arroz",24,02,2022);
    Cozinha1.adicionar_Ingrediente("Carne de Porco",25,01,2022);
    Cozinha1.adicionar_Ingrediente("Linguica",26,01,2022);

    // Instanciando objeto Cozinha2 usando construtor não-nulo.
    Cozinha Cozinha2(10,23,"Cozinha Chinesa","Yakisoba");
    Cozinha2.adicionar_Ingrediente("Champignon",22,02,2022);
    Cozinha2.adicionar_Ingrediente("Brocolis",23,02,2022);
    Cozinha2.adicionar_Ingrediente("Macarrao",24,03,2022);
    Cozinha2.adicionar_Ingrediente("Carne",25,01,2022);

    //Impressão de dados do objeto Cozinha1.
    cout << "Cozinha 1:" << endl;
    cout << "Nome: " << Cozinha1.getNome_Cozinha() << endl;
    cout << "Hora de Abertura: " << Cozinha1.getHora_Abertura() << ":00" << endl;
    cout << "Hora de Fechamento: " << Cozinha1.getHora_Fechamento() << ":00" << endl;
    cout << "Prato Principal: " << Cozinha1.getPrato_Principal() << endl;
    cout << "Ingredientes:" << endl;
    for(int i = 0; i < Cozinha1.contar_Ingredientes(); i++)
    {
        Cozinha1.getIngredientes(i);
    }
    cout << endl;


    //Impressão de dados do objeto Cozinha2.
    cout << "Cozinha 2:" << endl;
    cout << "Nome: " << Cozinha2.getNome_Cozinha() << endl;
    cout << "Hora de Abertura: " << Cozinha2.getHora_Abertura() << ":00" << endl;
    cout << "Hora de Fechamento: " << Cozinha2.getHora_Fechamento() << ":00" << endl;
    cout << "Prato Principal: " << Cozinha2.getPrato_Principal() << endl;
    cout << "Ingredientes:" << endl;
    for(int i = 0; i < Cozinha2.contar_Ingredientes(); i++)
    {
        Cozinha2.getIngredientes(i);
    }

    return 0;
}
