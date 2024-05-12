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
        
        //troca(&(cartas[rand1].valor), &(cartas[rand2].valor), &(cartas[rand1].naipe), &(cartas[rand2].naipe));
        
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
    
    for (int i = 0; i < 52; i++)
    {
        cout << cartas[i].naipe << " " << cartas[i].valor << endl;
    }
    
    int d = 0, n_jogadores;
    cout << "/--------------------------------------/ " << endl;
    cin >> n_jogadores;
    jogador player[2] , dealer;
    
    compra(deck, &(player[0].valor_mao), &(player[0].naipe_mao) );
    deck = pop(deck);
    
    compra(deck, &(player[1].valor_mao), &(player[1].naipe_mao) );
    deck = pop(deck);
    
    cout << player[0].valor_mao << player[0].naipe_mao << endl ;
    cout << player[1].valor_mao << player[1].naipe_mao << endl ;
    
    //puts(deck);
    
    
}


