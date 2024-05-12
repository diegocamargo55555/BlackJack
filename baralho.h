#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct cartas
{
    string naipe;
    int valor;
};
struct jogador
{
	string nome;
	int mao;
};
struct baralho
{
    cartas carta;
    baralho *link;
};


baralho *inicializaLista(baralho *L) {
	return NULL;
};
