#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **aloca_matriz(int linhas, int colunas)
{

	int **matriz_1 = (int**)malloc(linhas*sizeof(int*));

	for(int i = 0; i < linhas; i++)
	{

		matriz_1[i] = (int*)malloc(colunas*sizeof(int));

	}
	return matriz_1;
	printf("\n");
}



int **aloca_matriz2(int linhas, int colunas)
{

	int **matriz_2 = (int**)malloc(linhas*sizeof(int*));

	for(int i = 0; i < linhas; i++)
	{

		matriz_2[i] = (int*)malloc(colunas*sizeof(int));

	}
	return matriz_2;
       	printf("\n");	


}


void inicializa_matriz1(int linhas, int colunas, int **matriz1)
{
	
	printf("Matriz 1\n");
	
	for(int i = 0; i < linhas; i++)
	{
		for(int j = 0; j < colunas; j++)
		{
		
			printf("[%d][%d]: ",i,j);
			scanf("%d", &matriz1[i][j]);
			
			getchar();
		}

	}
		
}


void inicializa_matriz2(int linhas, int colunas, int **matriz2)
{
	
	printf("Matriz 2\n");

	for(int i = 0; i < linhas; i++)
	{
		for(int j = 0; j < colunas; j++)
		{
		
			printf("[%d][%d]: ",i,j);
			scanf("%d", &matriz2[i][j]);

			getchar();
		}
	

	}


}


void soma_matriz(int linhas, int colunas, int **matriz_soma, int **matriz_2)
{

	for(int i = 0; i < linhas; i++)
	{
		for(int j = 0; j < colunas; j++)
		{
			matriz_soma[i][j]+=matriz_2[i][j];

		}
	
	}
	
	printf("Soma matriz 1 com matriz 2\n");

	for(int i = 0; i < linhas; i++)
	{
		for(int j = 0; j < colunas; j++)
		{
		
			printf("%d ",matriz_soma[i][j]);

			
		}
		printf("\n");
	}

}


void libera(int linhas, int colunas, int **Matriz_1, int **Matriz_2)
{

	
	for(int i = 0; i < linhas; i++)
	{

		free(Matriz_1[i]);
		free(Matriz_2[i]);
	}

	free(Matriz_1);
	free(Matriz_2);
}


int main()
{

	int quantidade_linhas;
	int quantidade_colunas;


	printf("escolha a quantidade de linhas e colunas\n");

	scanf("%d %d", &quantidade_linhas, &quantidade_colunas);
	
	int **matriz_1 = aloca_matriz(quantidade_linhas,quantidade_colunas);

	int **matriz_2 = aloca_matriz2(quantidade_linhas, quantidade_colunas);

	inicializa_matriz1(quantidade_linhas, quantidade_colunas,matriz_1);
	
	inicializa_matriz2(quantidade_linhas,quantidade_colunas,matriz_2);	

	soma_matriz(quantidade_linhas,quantidade_colunas,matriz_1,matriz_2);

	libera(quantidade_linhas,quantidade_colunas,matriz_1,matriz_2);
}
