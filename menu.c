#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    int cliente;
    int funcionario;

     printf("\t\tProdutos\n");

   FILE *file;

      file = fopen ("produtos.txt","r");
      if (file== NULL){
        printf ("Arquivo nao pode ser acessado");
        getchar();
        exit(0);
      }
      char produtos1 [100];

      while (fgets(produtos1,100,file)!=NULL){

        printf("%s",produtos1);

      }

        fclose(file);
        system("pause");
        system("clear||cls");



        	printf("\n\t\tSistema Budega IMD\n");

		printf( "_______________________________________________\n" );
		printf( "\n\t\tMENU PRINCIPAL\n\n" );
		printf( "-----------------------------------------------\n" );
		printf(" Escolha uma das seguintes opções:\n\n" );
		printf("  1.Clientes\n");
		printf("  2.Funcionário\n");
		printf( "-----------------------------------------------\n" );
		printf( "\t\t\t\tS - Sair\n" );
		printf( "_______________________________________________\n" );

    scanf("%d",&opcao);

    system("clear||cls");

    printf("\n\tMenu Cliente.\n");

   switch (opcao){

      case 1:


    printf("\n1. Filtrar produtos por preço.\n ");
    printf("\n2 Filtrar produtos por estoque. \n ");
    printf("\n3 Carrinho de compras. \n ");
    printf("\n4 Voltar ao Menu principal. \n ");

    printf("\n");

    scanf("%d",&cliente);

    printf("\n");

   if (cliente == 1){

    printf("\n");
    printf("Filtrar produtos por preço.");
    break;
   }
   else if (cliente == 2){
     printf("\n Filtrar produtos por estoque \n ");
     break;
   }
   else if (cliente == 3){

    printf("\n Carrinho de compras. \n ");

    break;
   }
   else if (cliente==4){



    printf("\n*** Voltar ao Menu principal *** \n ");

    break;//Falta implemetar
   }
    // Falta Fazer caso seja sim  return para menu principal
    case 2:

        printf("\n1. Alertar estoque baixo e produto fora da validade.\n");
        printf("\n2. Entrada de produtos novos (pelo teclado ou por um arquivo).\n");
        printf("\n3. Reposição de estoques.\n");
        printf("\n4. Filtrar produtos por preço.\n");
        printf("\n5. Filtrar produtos por estoque. \n ");
        printf("\n6. Voltar ao Menu principal. \n ");
        printf("\n");

        scanf("%i",&funcionario);

         printf("\n");

        if (funcionario == 1){
    printf("Alertar estoque baixo e produto fora da validade.");
    break;
   }
   else if (funcionario == 2){
     printf("\n Entrada de produtos novos (pelo teclado ou por um arquivo).\n ");
     break;
   }
   else if (funcionario == 3){

    printf("\nReposição de estoques. \n ");

    break;
   }

   else if (funcionario == 4){

    printf("\n Filtrar produtos por preço. \n ");
    break;
}
    else if (funcionario == 5){

    printf("\nFiltrar produtos por estoque. \n ");

    break;

    }
     else if (funcionario == 6 ){

    printf("\n*** Voltar ao Menu principal *** \n ");

    break;

    }
   }
   printf("\n");
   system("pause");
    return 0;
}
