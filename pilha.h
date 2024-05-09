


void imprimePilha(cartas *L) {
	cartas *P;
	P = L;	
	
	printf("\n Imprime PILHA: \n");	
	while(P != NULL) {
		cout << P->info << " ";	
		P = P->link;
	}	
}

cartas *PUSH(cartas *L, int x) {
	cartas *N;

	N = new no;
	N->info = x;

    N->link = L;
	
	L = N;
	return (L);
}

cartas *POP(cartas *L, int *n) {
	cartas *AUX;

	if (L != NULL) {
		*n = L->info;
		AUX = L;
		L = L->link;
		delete AUX;
	}
	else{
		*n = 0;
	}
	return (L);
}

