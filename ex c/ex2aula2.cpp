#include <stdio.h>

int a, b, c, d, media;

int main(){
	printf("numero A: ");
	scanf("%d", &a);
	printf("numero B: ");
	scanf("%d", &b);
	printf("numero C: ");
	scanf("%d", &c);
	printf("numero D: ");
	scanf("%d", &d);
	media = (a + b + c + d)/ 4;
	printf ("Media = %d", media);
}
