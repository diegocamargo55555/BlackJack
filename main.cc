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
    
    
    
    
    gerar_baralhos(baralho);
    

    imprimePilha(baralho);
}
