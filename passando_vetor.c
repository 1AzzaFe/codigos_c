#include <stdio.h>
#include <stdlib.h>

//valgrind --leak-check=full ./nome_programa.c
//valgrind ./nome_programa.c

int* cria_vetor(int value)
{


             int *vetor = (int *)malloc(value * sizeof(int));

            
            for(int i = 0 ; i  <  value ; i++)
            {
                
                scanf("%d", &vetor[i]);

            }

            return vetor;

}


void imprime_matriz(int value, int *vetor_imprime)
{

             
            for(int i = 0 ; i <  value ; i++)
            {


                printf("Posicao %d do vetor = %d\n", i+1 ,vetor_imprime[i]);


            }
            

}
 

int main()
{

int n_elementos_matriz;
int *ponteiro;

        //inicio
        printf("Escolha a quantidade de elementos do vetor: ");
        scanf("%d",&n_elementos_matriz);

        //ponteiro recebe vetor que é a funçao promiamente dita
        ponteiro = cria_vetor(n_elementos_matriz);


        if (cria_vetor == NULL) {
        return 1;  // Sair se a alocação falhar
        }

        //chama funçao de impressao
        imprime_matriz(n_elementos_matriz,ponteiro);


        //libera memoria que esta alocada na funçao criada
        free(ponteiro);
        return 0;
 

}