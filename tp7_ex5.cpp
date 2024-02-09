//Écrire :
//Une procédure void chargement(int *,int *, int M[20][20]) permettant de saisir un entier
//1<=n<=20 et un entier 1<=m<=20 et de charger une matrice M par n*m entiers,
//Une procédure void affichage(int ,int, int M[20][20]) permettant d’afficher le éléments
//de la matrice M,
//Le programme principal déclarant n, m et une matrice statique d’entiers M[20][20] et
//d’appeler les deux procédures chargement et affichage.

#include<stdio.h>
#include<stdlib.h>

void chargement(int *n,int *m, int M[20][20]){
	do{
		printf("donner le nombre de ligne=");
		scanf("%d",n);
	}while((*n<1)||(*n>20));
	
	do{
		printf("donner le nombre de colonne=");
		scanf("%d",m);
	}while((*m<1)||(*m>20));
	
	for(int i=0; i<*n; i++){
		for(int j=0; j<*m; j++){
			printf("donner M[%d][%d]",i,j);
			scanf("%d",&M[i][j]);
		}
	}
}

void affichage(int n,int m, int M[20][20]){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("M[%d][%d]=%d",i,j,M[i][j]);
			printf("\n");
		}
	}
	
}
int main(){
	int n,m;
	int M[20][20];
	chargement (&n,&m,M);
	affichage(n,m,M);
	return 0; 
}
