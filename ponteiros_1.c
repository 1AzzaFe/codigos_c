#include <stdio.h>
#include <stdlib.h>


/*Fazer uma função recebe_vetor com as seguintes características:
- Parâmetros: ponteiro para ponteiro, que indica a posição inicial de um vetor a ser
alocado dinamicamente pela função.
- Retorno: tamanho alocado (ou 0 se não foi possível).
- Descrição: recebe do usuário o tamanho do vetor a ser criado (vetor de int), cada
 um dos dados do vetor e retorna o vetor preenchido bem como o seu tamanho.*/


/*DIFICULDADE
1- IMPRIMIR TAMANHO DO VETOR (size_t nao foi util, nao sei manipular).
2- ENTENDENDO COMO FUNCIONA PASSAGEM POR REFERENCIA (resolveu o topico acima)
*/


//valgrind --leak-check=full ./ponteiros_1


int* recebe_vetor(int *numero_elementos, int *cria_vet_alo)
{

        

        scanf("%d",numero_elementos);

        cria_vet_alo = (int*)malloc(*numero_elementos * sizeof(int));


        for(int i = 0; i < *numero_elementos; i++)
            scanf("%d", &cria_vet_alo[i]);


        return cria_vet_alo;


}

int main()
{


    int *vetor;
    int tamanho_elementos;
     
        /*passa o endereço da variavel tamanho_elemento,
        dessa forma o valor escolhido pelo usuario sera
        usada na main, valor que incialmete nao é inicializado (0)
        passa a ter o valor atribuido na funçao (recebe_vetor).
        */

        vetor = recebe_vetor(&tamanho_elementos,vetor);

         
        for(int i = 0; i < tamanho_elementos ; i++)
        {

            printf("Posicao %d = %d\n", i, vetor[i]);

        }

        //em bytes
        printf("Tamanho do vetor em bytes = %zu\n", tamanho_elementos * sizeof(int));

    
        //libera espaço de memoria alocada por cria_vet_alo linha 24
        free(vetor);


}