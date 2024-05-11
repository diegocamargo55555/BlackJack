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

cartas *strg_PUSH(cartas *L, string x) {
	cartas *N;

	N = new cartas;
	N->naipes = x;

    N->link = L;
	
	L = N;
	return (L);
}


void imprimePilha(cartas* baralho) {
	cartas *P;
	P = baralho;	
	
	printf("\n Imprime PILHA: \n");	
	while(P != NULL) {
		cout << P->valor << " ";	
		P = P->link;
	}	
}

void puts(cartas* baralho) {
	cartas *P;
	P = baralho;

	while(P != NULL) {
		printf("carta : %d %s \n", P->valor, (P->naipes).c_str());
		P = P->link;
	}	
}