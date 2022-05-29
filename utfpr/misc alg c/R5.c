#include <stdio.h>

int main(){
	int N, i, t;
	
	do{
	scanf("%d", &N); 
	if (N<3 || N>1000){
		printf("Valor invalido! Tente novamente!\n");
		continue;
	}
	if (N<1001 && N>2){
	for (i=1; i<=10; i++){
		if (i<=10){
			t = i*N;
			printf ("%d X %d = %d\n", i, N, t);
		}
	}}
	} while(i<=10);
	return 0;
}