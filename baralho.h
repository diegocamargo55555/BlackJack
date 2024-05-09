#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct cartas
{
    int numero;
    string nipe;
    cartas *link ;
};

cartas *inicializaLista(cartas *L) {
	return NULL;
};

cartas *PUSH(cartas *L, int x) {
	cartas *N;

	N = new cartas;
	N->numero = x;

    N->link = L;
	
	L = N;
	return (L);
}

void gerar_baralhos(cartas* baralho){
    for (int i = 0; i < 50; i++)
    {
        int Numero = rand() % 9 + 1 ;
        PUSH(baralho, Numero);
    }
}

void imprimePilha(cartas* baralho) {
	cartas *P;
	P = baralho;	
	
	printf("\n Imprime PILHA: \n");	
	while(P != NULL) {
		cout << P->numero << " ";	
		P = P->link;
	}	
}