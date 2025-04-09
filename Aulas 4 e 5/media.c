#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

double mean(int* vetor, int n);

int main(void) {
	srand(time(NULL));

	int vetor[SIZE] = {};
	
	printf("Valores: ");
	for(int i=0;i<SIZE;i++){
		vetor[i] = rand() % 1000;
		printf(" %d", vetor[i]);
	} printf("\n");

	printf("Media: %.2f", mean(vetor, SIZE));

    return 0;
}

double mean(int* vetor, int n){
	int soma = 0;
	
	for(int i=0;i<n;i++){
		soma += vetor[i];
	}
	
	return soma/n;
}