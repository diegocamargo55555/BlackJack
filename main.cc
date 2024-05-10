#include <iostream>
#include <cstdlib>
#include <ctime>
#include "baralho.h"
using namespace std;

int main()
{
    srand(time(nullptr));
    
    cartas* baralho;
    inicializaLista(baralho);
    int numero = 0;

    //gerar_baralhos(baralho);

    for (int i = 0; i < 52; i++)
    {
        int n = rand() % 10 + 1 ;
        baralho = PUSH(baralho, n);
        cout << n << " " ;
    }
    
    imprimePilha(baralho);
}
