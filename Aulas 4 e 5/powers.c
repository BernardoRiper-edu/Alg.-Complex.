#include <stdio.h>
#include <stdlib.h> // Para usar atoi()

int power(int n, int q);

int main(int argc, char* argv[]) {

    unsigned long long int resultado = power(2, atoi(argv[2]));
    printf("Resultado: %llu\n", resultado);

    return 0;
}

int power(int n, int q) {
    if(q == 0){
		return 1;
    } else if(q == 1){ 
		return 2;
	} else return 2 * power(2, q - 1);
}
