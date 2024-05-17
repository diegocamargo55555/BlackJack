#include <iostream>
#include <cstdlib>
#include <ctime>
#include "baralho.h"
using namespace std;

int main()
{
    srand(time(nullptr));
    
    carta cartas[52];
    
    baralho *deck;
    string naipe, aux;
    int n, k = 0, temp, rand1, rand2;
    
    inicializaLista(deck);

    
    
    // gera as cartas
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            naipe = " ouros";
        }else if (i == 1)
        {
            naipe = " paus";
        }else if (i ==2)
        {
            naipe = " espadas";
        }else if (i == 3)
        {
            naipe = " copas";
        }
        for (int j = 1; j < 14; j++, k++)
        {
            if (j >= 10)
            {
                n = 10;
                cartas[k].valor = n;
                cartas[k].naipe = naipe;
            }else{
                cartas[k].valor = j;
                cartas[k].naipe = naipe;
            }
        }
    }
    // randomiza
    for (int i = 0; i < 104; i++)
    {
        rand1 = rand() % 52;
        rand2 = rand() % 52;
                
        temp = cartas[rand1].valor;
        aux = cartas[rand1].naipe;
        
        cartas[rand1].naipe = cartas[rand2].naipe;
        cartas[rand2].naipe = aux;
        
        cartas[rand1].valor = cartas[rand2].valor;
        cartas[rand2].valor = temp;
    }
    for (int i = 0; i < 52; i++)
    {
        deck = PUSH(deck, cartas[i].valor, cartas[i].naipe);
    }    
    cout << "/--------------------------------------/ " << endl;
    //cin >> n_jogadores;
    int n_jogadores = 3;
    jogador player[n_jogadores] , dealer;
    dealer.total = 0;

    for (int i = 0; i < n_jogadores; i++)
    {
        player[i].total = 0;
    }
    
    player[0].nome = "luminous";
    player[1].nome = "Gabi";
    dealer.nome = "Dealer";

    for (int i = 0; i < 2; i++)
    {
        int nj = n_jogadores;
        while (nj--)
        {
            cout << endl << n << endl;
            compra(deck, &player[nj], i);
            deck = pop(deck);    
        }    
        compra(deck, &dealer, i);
        deck = pop(deck);
    }
    
    print_mao(dealer, 2);
    print_mao(player[0], 2);
    print_mao(player[1], 2);


    int i =0;

    while (dealer.total < 17)
    {
        while (player[0].total < 21 and player[0].acao != 'p')
        {
            cout << player[0].nome << "deseja para(p) ou comprar(c): ";  
            cin >> player[0].acao;
        }
        
    }
    


    







    
    
    
}

