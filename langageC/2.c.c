#include <stdlib.h>
#include <stdio.h>

int main() {
	int a , b , c;
	printf("bonjour\n");
	printf("Entrez la premiere valeur , a : ");
	scanf("%d", &a);
	printf("Entrez la premiere valeur , b : ");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;
	printf("Les valeurs ont été échangées");
	printf("%s, %i", "\nLa nouvelle valeur de a est : ", a);
	printf("%s, %i", "\nLa nouvelle valeur de b est : ", b);
	printf("\n");
}