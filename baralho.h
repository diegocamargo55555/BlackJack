#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

struct cartas
{
    int valor;
    string naipes;
    cartas *link ;
};

struct jogador
{
	string nome;
	int mao;
};

bool ja_existe();

cartas *inicializaLista(cartas *L) {
	return NULL;
};

cartas *PUSH(cartas *L, int v, string x) {
	cartas *N;

	N = new cartas;
	N->valor = v;
	N->naipes = x;

    N->link = L;
	
	L = N;
	return (L);
}



void gerar_carta(cartas* baralho, int n , string naipe){
	if (n == 10)
            {
                n = 10;
                baralho = PUSH(baralho, n, naipe);
            }else
                baralho = PUSH(baralho, n, naipe);
}

void puts(cartas* baralho) {
	cartas *P;
	P = baralho;

	while(P != NULL) {
		printf("carta : %d %s \n", P->valor, (P->naipes).c_str());
		P = P->link;
	}	
}