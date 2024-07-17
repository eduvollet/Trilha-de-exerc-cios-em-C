#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
      int N, *P, X;
      
      srand(time(NULL));
      printf("Digite um numero: ");
      scanf("%d", &N);
      
      P = (int *)malloc(sizeof(int) * N);
      
      for(int i = 1; i <= N; i++){
            P[i] = rand() % 101;
      }
      for(int i = 1; i <= N; i++){
            printf("%d: %d\n", i, P[i]);
      }
      
      printf("Verificar de o valor esta no vetor: ");
      scanf("%d", &X);
      
      for(int i = 0; i < N; i++){
            if(P[i] == X){
                  printf("%d esta no vetor", X);
                  printf(" P[%d]\n", i);  
            }
      }
      free(P);
}  
