#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUMTHREADS 2
#define VETSIZE 5000

typedef struct {
	int fromidx, length;
}thread_arg, *ptr_thread_arg;

pthread_t threads[NUMTHREADS];
thread_arg arguments[NUMTHREADS];
int nums[VETSIZE];
int sum;

void *thread_func(void *arg);

int main(int argc, char **argv) {
	int i, length, remainder, saida, point = 0;
	while(saida != -1){
		printf("Coloque valores para os vetores\n(-1)Para Sair: ");
		scanf("%d", &saida);
		if(saida == -1){
			printf("(-1)Tem certeza\n(2)Nao: ");
			scanf("%d", &saida);
			if(saida == 2){
				printf("\n-1 Adicionado no vetor %d\n", point);
				nums[point] = -1;
			}
		}
		else{
			nums[point] = saida;
		}
		point++;
	}
	sum = 0; length = VETSIZE/NUMTHREADS;
	remainder = VETSIZE % NUMTHREADS;

	for(i=0; i<NUMTHREADS; i++){
		arguments[i].fromidx = i * length;
		arguments[i].length = length;
		if(i == (NUMTHREADS - 1)) arguments[i].length += remainder;
		pthread_create(&(threads[i]), NULL, thread_func, &(arguments[i]));
	}

	for(i=0; i<NUMTHREADS; i++) pthread_join(threads[i],NULL);
	printf("A soma dos numeros do vetor eh %d\n", sum);
}

void *thread_func(void *arg){
	ptr_thread_arg  argument = (ptr_thread_arg)arg;
	int i, localsum = 0, endidx;

	endidx = argument->fromidx + argument->length;
	for(i = argument->fromidx; i<endidx; i++){
		localsum += nums[i];
}
	sum += localsum;
}

