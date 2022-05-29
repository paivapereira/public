#include <stdio.h>

int main () {
	
	int N, M;
	while (N != 0){
		scanf ("%d", &N);
		if (N>100 || N<-100){
			printf("Valor invalido! Tente novamente!\n");
			}else if (N>M){
				M = N;
			}
		}	
	N = M;
	printf("%d", N);
	return 0;
}
