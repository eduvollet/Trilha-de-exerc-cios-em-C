#include <stdio.h>
#include <stdlib.h>

int main(){
      int N, *P;
      
      printf("Digite um numero: ");
      scanf("%d", &N);
      
      P = (int *)malloc(sizeof(int) * N);
      
      for(int i = 1; i <= N; i++){
            P[i] = rand() % 101;
      }
      for(int i = 1; i <= N; i++){
            printf("%d: %d\n", i, P[i]);
      }
      
      free(P);
}
