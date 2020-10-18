#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void* primeFactors(void *param){
	int n = atoi(param);
	while (n%2 == 0){
		printf("%d", 2);
		n = n/2;
	}
	for (int i =3; i <= sqrt(n); i = i+2){
		while (n%i == 0){
			printf("%d", i);
			n = n/i;
		}
	}
	if (n>2){
		printf("%d", n);
	}
	pthread_exit(0);
}

int main(int argc, char *argv[]){
	if(argc < 2) {
		fprintf(stderr, "Usage: ./assn3 <number to factor>\n");
		exit(1);
	}
	if(atoi(argv[1]) < 2){
		fprintf(stderr, "Usage: %d is not >= 2\n", atoi(argv[1]));
		exit(1);
	}
	pthread_t tid;
	pthread_attr_t attr;
	for(int i =1; i <argc; i++){
		pthread_attr_init(&attr);
		printf("\n%d: ", atoi(argv[i]));
		pthread_create(&tid, &attr, primeFactors, argv[i]);
		pthread_join(tid, NULL);
	}
}
