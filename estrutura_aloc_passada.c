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




 void inserir_nome_idade(inf passagem_pessoa,int passagem_n_pessoas,int passagem_n_exames)
{
    int i = 0;

    //nome dos alunos
    while( i < passagem_n_pessoas)
    {
             
            
            fgets(passagem_pessoa[i].nome,50,stdin);
            passagem_pessoa[i].nome[strcspn(passagem_pessoa[i].nome, "\n")] = '\0';

             

            scanf("%d", &passagem_pessoa[i].idade); 

            getchar();

    i++;
    }


    //entrada infomações do professor
    for(int i = 0 ; i < passagem_n_pessoas ; i++)
        for(int j = 0 ; j < passagem_n_exames ; j++)
        {  
    {
             
            printf("Notas do professor:\n");
            fgets(passagem_pessoa[i].conect_exame[j].notas_professor,100,stdin);
            passagem_pessoa[i].conect_exame[j].notas_professor[strcspn(passagem_pessoa[i].conect_exame[j].notas_professor, "\n")] = '\0';

            

            printf("Notas do exame:\n");
            scanf("%d",&passagem_pessoa[i].conect_exame[j].nota_prova); 


            getchar();

    }
        }


    //impressao das informaçoes
    for(int i = 0 ; i < passagem_n_pessoas ; i++ )
    {

        printf("Nome do aluno: %s\nIdade: %d\n",passagem_pessoa[i].nome,passagem_pessoa[i].idade);
        for(int j = 0 ; j < passagem_n_exames ; j++)
        {
            

            printf("Notas do professor: %s\nNota da prova: %d\n",passagem_pessoa[i].conect_exame[j].notas_professor,passagem_pessoa[i].conect_exame[j].nota_prova);

        }
            printf("\n");

    }





}




 

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

    inserir_nome_idade(&pessoa,quantidade_pessoas,quantidade_exames);


    getchar();

    free(pessoa);


    for(int i = 0 ;i < quantidade_pessoas;i++)
    {

    free(pessoa[i].conect_exame); 

    }

    


}