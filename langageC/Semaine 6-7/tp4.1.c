#include <stdlib.h>
#include <stdio.h>

int main() {
/**
 * H -> le nombre de colonne 
 * L -> le nombre de ligne
**/
	int H, L;

	printf("%s\n", "Hauteur = ? ");
	scanf("%d", &H);
	printf("\n%s", "Largeur = ? ");
	scanf("%d", &L);

	/**
	 * Creation d'un tableau de char*
	 **/
	char** m;
	m = (char**) malloc(H * sizeof(char*));
	//if(H == null){
	//	exit(1);
	

	/**
	 * Creation d'une matrice de char 
	 **/
	for (int i = 1; i <= H; ++i)
	{
		m[i] = (char*) malloc (L * sizeof(char));
		//conditions a verifer
		//if(m[i] == null){ 
		//	exit(1);			
		//} 
	}

	/**
	 * Afficher la matrice avec des '.'
	 * Parcours chaque ligne
	 **/
	for (int i = 1; i <=H; ++i)
	{
		/**
		 * Parcours chaque index de ma ligne -> les colonnes de ma ligne
		 **/
		for(int a = 1; a <= L; a++){
			m[i][a] = '.';
			printf("%c ", m[i][a]);

		}
		printf("\n");
	}
	
	int input, compteur;
	char x , o , p;
	x = 'X';
	o = 'O';
	compteur = 0;
	printf("Entrer le numero de la colonne dans laquelle mettre un X/O? ");
	scanf("%d", &input);
	
	while(input != '0'){

		/**
		 * REALLOC
		**/
		if(input > L){
			for (int i = 0; i < L; ++i)
			{	
				*m = (char*)realloc(*m, input*sizeof(char));
			}
		}
		
		
		for (int i = L; i >= 1; --i){
			if(m[i][input] == '.'){
				if(compteur%2 == 0){
					p = x;
				}
				else{
					p = o;
				}
				m[i][input] = p;
				break;
			}
		}
		for (int i = 1; i <= H; ++i)
		{
			for (int j = 1; j <= L; ++j)
			{
				printf("%c ", m[i][j]);
			}
			printf("\n");
		}
		compteur++;
		printf("Entrer le numero de la colonne dans laquelle mettre un X/O? ");
		scanf("%d", &input);
	}
	
	





}
