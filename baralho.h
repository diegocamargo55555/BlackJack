#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct carta
{
    string naipe;
    int valor;
};
struct jogador
{
	string nome;
	int valor_mao;
	string naipe_mao;
};
struct baralho
{
    int valor;
    string nipe;
    baralho *link;
};

void troca(int *v1, int *v2, string *s1, string *s2  )
{
	int temp;
	string aux;
	
	temp = *v1;
	aux = *s1;
	
	*v1 = *v2;
	*s1 = *s2;
	
	*v1 = temp;
	*s1 = aux;
}

baralho *inicializaLista(baralho *L) {
	return NULL;
};

baralho *PUSH(baralho *L, int v, string x) {
	baralho *N;

	N = new baralho;
	N->valor = v;
	N->nipe = x;

    N->link = L;
	
	L = N;
	return (L);
}

baralho *pop(baralho *l)
{
	baralho *temp;
	if (l != nullptr)
	{
		temp = l;
		l = l->link;
		delete temp;
	}
	return(l);		
}
void puts(baralho* dek) {
	baralho *P;
	P = dek;

	while(P != NULL) {
		printf("carta : %d %s \n", P->valor, (P->nipe).c_str());
		P = P->link;
	}	
}

void compra(baralho *D, int *cart, string *nip)
{
	*cart = D->valor;
	*nip = D->nipe;
	
}
	
