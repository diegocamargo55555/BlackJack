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
    inicializaLista(deck);

    string naipe;
    int n;
    /*
    for (int i = 0; i < 52; i++)
    {
        int n = rand() % 10 + 1 ;
        baralho = PUSH(baralho, n);
        //cout << n << " " ;
    }*/
    
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            naipe = "ouros";
        }else if (i == 1)
        {
            naipe = "paus";
        }else if (i ==2)
        {
            naipe = "espadas";
        }else if (i == 3)
        {
            naipe = "copas";
        }
        for (int j = 1; j < 14; j++)
        {
            if (j > 10)
            {
                n = 10;
                cartas[i].valor = n;
            }else{
                cartas[i].valor = i;
                cartas[i].naipe = naipe;
            }
                
        }
    }
    /*
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            baralho = PUSH(baralho, j);
        }
    }
    */
    

    
    
    puts(baralho);
}
