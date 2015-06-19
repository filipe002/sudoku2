#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include <time.h>

int main(void)
{
    const char *const red = "\033[0;40;31m";
    srand( (unsigned)time(NULL) );
    int i, j, n, mainmenu,x;
    int para;
    int matrizaux[9][9];
    int matriz[9][9] = {7,5,8,3,6,4,2,1,9,3,9,2,1,5,8,7,6,4,4,1,6,7,9,2,5,3,8,1,8,7,5,2,9,6,4,3,9,4,5,6,8,3,1,7,2,6,2,3,4,1,7,8,9,5,2,3,4,8,7,1,9,5,6,5,7,9,2,3,6,4,8,1,8,6,1,9,4,5,3,2,7};
    para = 0;
    mainmenu = funcaomainmenu();
 while ( mainmenu != 1){
   if( mainmenu == 2)
    {
    system("clear");
    printf("*********************************************** \n");
    printf("* _____       _____  ____   ___      ___       * \n");
    printf("*   |   |   |   |   |    | |___| |  |___| |    * \n");
    printf("*   |   |   |   |   |    | |  |  |  |   | |    * \n");
    printf("*   |   |___|   |   |____| |   | |  |   | |___ * \n");
    printf("*                                              * \n");
    printf("***********************************************");
    printf("\n\n");
    printf("Para conseguir jogar, é necessario seguir algumas regras.\n");
    printf("--> São 9 tabelas contendo 9 quadrados cada uma, totalizando 81 quadrados\n");
    printf("que podem, e devem, ser preenchidos com numeros de 1 a 9\n");
    printf("sem que esses números se repitam nas linhas horizontais\n");
    printf("e verticais(colunas) do tabuleiro e sem que esses numeros se repitam dentro de cada tabela 3x3.\n");
    printf("--> OBS.: As linhas e as colunas começam do 0 e vao até o 8!!!\n");

	sleep(10);
	system("clear");
	}
	if( mainmenu == 3) return 0;

	mainmenu = funcaomainmenu();
        }

    system("clear");
	funcaogera(matriz);


	while (x<39){
	x =0;
	for(i=0; i<9;i++){
		for(j=0; j<9; j++){
			if(x <= 45){

				if(rand() % 2 == 1)
				matrizaux[i][j] = matriz[i][j];
				else {
					matrizaux[i][j] = 0;
					x++;
				}
				}
			else matrizaux[i][j] = matriz[i][j];
		}

		}
	}
while(para!=99){

    //printf("\n");
        funcaoescreve(matrizaux);
        matrizaux[9][9] = funcaojogada(matrizaux, matriz);
    /*printf("Se desejar terminar o jogo digite 99 e para continuar jogando digite 11.");
    scanf("%d\n", &para);
    if (para == 11) funcaomainmenu();
    else if(para == 99) return 0;*/
	system("clear");
    printf("Para acabar o jogo digite 99 mas, para continuar digite qualquer outro numero!\n");
    scanf("%d", &para);
        if( para == 99){
            printf("Até logo!\n");
            return 0;
            }
            else system("clear");
     }
 return 0;
}



