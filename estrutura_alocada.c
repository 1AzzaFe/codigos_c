#include <stdlib.h>
#include <stdio.h>
#include <string.h>



typedef struct dados_exames{

     
    int nota_prova;
    char notas_professor[100];

}exames;


typedef struct dado_inicial
{

    char nome[50];
    int idade;
    
    exames *conect_exame;

}*inf;

 

int main ()
{     


    int i,j = 0;

    int quantidade_exames;

    int quantidade_pessoas;

    printf("Escolha a quantidade de pessoas\n");
    scanf("%d",&quantidade_pessoas);

    printf("Escolha a quantidade de exames\n");
    scanf("%d",&quantidade_exames);

     

    inf pessoa = (inf )malloc(quantidade_pessoas*sizeof(struct dado_inicial));


    for(int i = 0 ;i < quantidade_pessoas;i++)
    {

    pessoa[i].conect_exame = malloc(quantidade_exames*sizeof(struct dados_exames));

    }


    getchar();

    while( i < quantidade_pessoas)
    {
             
            
            fgets(pessoa[i].nome,50,stdin);
            pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';

             

            scanf("%d", &pessoa[i].idade); 

            getchar();

    i++;
    }


    for(int i = 0 ; i < quantidade_pessoas ; i++)
        for(int j = 0 ; j < quantidade_exames ; j++)
        {  
    {
             
            printf("Notas do professor:\n");
            fgets(pessoa[i].conect_exame[j].notas_professor,100,stdin);
            pessoa[i].conect_exame[j].notas_professor[strcspn(pessoa[i].conect_exame[j].notas_professor, "\n")] = '\0';

            

            printf("Notas do exame:\n");
            scanf("%d",&pessoa[i].conect_exame[j].nota_prova); 


            getchar();

    }
        }



     for(int i = 0 ; i < quantidade_pessoas ; i++ )
    {

        printf("Nome do aluno: %s\nIdade: %d\n",pessoa[i].nome,pessoa[i].idade);
        for(int j = 0 ; j < quantidade_exames ; j++ )
        {
            

            printf("Notas do professor: %s\nNota da prova: %d\n",pessoa[i].conect_exame[j].notas_professor,pessoa[i].conect_exame[j].nota_prova);

        }
            printf("\n");

    }

    free(pessoa);


    for(int i = 0 ;i < quantidade_pessoas;i++)
    {

    free(pessoa[i].conect_exame); 

    }

    


}