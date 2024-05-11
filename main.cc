#include <iostream>
#include <cstdlib>
#include <ctime>
#include "baralho.h"
#include <string>
using namespace std;

int main()
{
    srand(time(nullptr));
    
    cartas* baralho;
    inicializaLista(baralho);

    string naipe;
    int n;
    
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
                baralho = PUSH(baralho, n, naipe);
            }else
                baralho = PUSH(baralho, j, naipe);
        }
    }
    //puts(baralho);
    
    for (int i = 0; i < 52; i++)
    {
        cartas *p1, *p2, *aux;
        int ale1, ale2;
        ale1 = rand() % 52;
        ale2 = rand() % 52;
        
        for (size_t i = 0; i < ale1; i++)
        {
            p1 = baralho->link;
        }
        for (size_t i = 0; i < ale2; i++)
        {
            p2 = baralho->link;
        }
        aux = p1;
        p1 = p2;
        p2 = aux;
    }

    
    cout << endl << " ------------------------- \nembaralhado" << endl;
    
    puts(baralho);
}




    /*
    for (int i = 0; i < 52; i++)
    {
        int n = rand() % 10 + 1 ;
        baralho = PUSH(baralho, n);
        //cout << n << " " ;
    }*/