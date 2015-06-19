#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int funcaomainmenu(void)
{
    int op;
    printf("**     **  *******  **   *  *     *\n");
    printf("* *   * *  *        * *  *  *     *\n");
    printf("*  * *  *  ****     *  * *  *     *\n");
    printf("*   *   *  *        *  * *  *     *\n");
    printf("*       *  *******  *   **  *******\n");
    printf("1 - Iniciar novo jogo\n");
    printf("2 - Para instruçoes.\n");
    printf("3 - Para fechar o jogo.\n");
    printf("Digite a opcao desejada: \n");

    scanf("%d", &op);
    return op;
}

void funcaoescreve(int matriz[9][9]){

int i,j,x;
for(i=0; i<9;i++){
if(i==0){
printf("    0   1   2   3   4   5   6   7   8\n");
printf("  +-----------+-----------+-----------+\n");

}
if(i==3)
printf("  +-----------+-----------+-----------+\n");
if(i==6)
printf("  +-----------+-----------+-----------+\n");


		for(j=0; j<9; j++){

                if( j ==0){
				if(matriz[i][j] == 0){
				printf("%d | - |", i);
				}
				else {
					printf("%d | %d |",i, matriz[i][j]);
					x++;
				}
				}
				else{
				if(matriz[i][j] == 0){
				printf(" - |");
				}
				else {
					printf(" %d |", matriz[i][j]);
					x++;
				}
				}

		}
		printf("\n");
	}

printf("  +-----------+-----------+-----------+\n");


}

int verifica(int n, int i1, int j1, int matriz[9][9]){
	if( matriz[i1][j1] == n) return 0;
	else return 1;
}

int funcaojogada (int matrizaux[9][9],int matriz[9][9]){

int i,j,y;
const char *const red = "\033[0;40;31m";
 const char *const green = "\033[0;40;32m";
const char *const normal = "\033[0m";
    printf("Digite a linha e a coluna que deseja substituir:\n");
    scanf("%d%d", &i,&j);
    printf("Agora escolha o numero que deseja colocar no lugar selecionado:\n");
    scanf("%d",&y);
	if(verifica(y,i,j,matriz) == 0){
    	matrizaux[i][j] = y;
        printf("%sJOGADA VÁLIDA!%s\n",green,normal);
        }
    else printf("%sJOGADA INVÁLIDA!%s\n",red, normal);
	sleep(1);
	return matrizaux;

}


void funcaogera(int matriz[9][9]) {

        int i,j,x;
	srand( (unsigned)time(NULL) );
        x= rand() % 11;

        for(i=0; i<9; i++) {
            for(j=0; j<9; j++) {

		if(x == 1){
               	 	if(matriz[i][j] == 5) {
               	 	    matriz[i][j] = 7;
               	 	}
               	 	else if (matriz[i][j] == 7) {
               	 	    matriz[i][j] = 5;
               	 	}
			if(matriz[i][j] == 3){
				matriz[i][j] = 8;
			}
			else if(matriz[i][j] == 8){
				matriz[i][j] = 3;
			}
			if(matriz[i][j] == 4){
				matriz[i][j] = 9;
			}
			else if(matriz[i][j] == 9){
				matriz[i][j] = 4;
			}
			if(matriz[i][j] == 1){
				matriz[i][j] = 2;
			}
			else if (matriz[i][j] == 2){
				matriz[i][j] = 1;
			}
		}

		if(x == 2){
               	 	if(matriz[i][j] == 5) {
               	 	    matriz[i][j] = 6;
               	 	}
               	 	else if (matriz[i][j] == 6) {
               	 	    matriz[i][j] = 5;
               	 	}
			if(matriz[i][j] == 7){
				matriz[i][j] = 8;
			}
			else if(matriz[i][j] == 8){
				matriz[i][j] = 7;
			}
			if(matriz[i][j] == 4){
				matriz[i][j] = 3;
			}
			else if(matriz[i][j] == 3){
				matriz[i][j] = 4;
			}
			if(matriz[i][j] == 1){
				matriz[i][j] = 2;
			}
			else if (matriz[i][j] == 2){
				matriz[i][j] = 1;
			}
		}

		if(x == 3){
               	 	if(matriz[i][j] == 5) {
               	 	    matriz[i][j] = 4;
               	 	}
               	 	else if (matriz[i][j] == 4) {
               	 	    matriz[i][j] = 5;
               	 	}
			if(matriz[i][j] == 3){
				matriz[i][j] = 2;
			}
			else if(matriz[i][j] == 2){
				matriz[i][j] = 3;
			}
			if(matriz[i][j] == 7){
				matriz[i][j] = 6;
			}
			else if(matriz[i][j] == 6){
				matriz[i][j] = 7;
			}
			if(matriz[i][j] == 1){
				matriz[i][j] = 9;
			}
			else if (matriz[i][j] == 9){
				matriz[i][j] = 1;
			}
		}

		if(x == 4){
               	 	if(matriz[i][j] == 5) {
               	 	    matriz[i][j] = 6;
               	 	}
               	 	else if (matriz[i][j] == 6) {
               	 	    matriz[i][j] = 5;
               	 	}
			if(matriz[i][j] == 4){
				matriz[i][j] = 8;
			}
			else if(matriz[i][j] == 8){
				matriz[i][j] = 4;
			}
			if(matriz[i][j] == 3){
				matriz[i][j] = 9;
			}
			else if(matriz[i][j] == 9){
				matriz[i][j] = 3;
			}
			if(matriz[i][j] == 7){
				matriz[i][j] = 2;
			}
			else if (matriz[i][j] == 2){
				matriz[i][j] = 7;
			}
		}

		if(x == 5){
               	 	if(matriz[i][j] == 1) {
               	 	    matriz[i][j] = 7;
               	 	}
               	 	else if (matriz[i][j] == 7) {
               	 	    matriz[i][j] = 1;
               	 	}
			if(matriz[i][j] == 5){
				matriz[i][j] = 8;
			}
			else if(matriz[i][j] == 8){
				matriz[i][j] = 5;
			}
			if(matriz[i][j] == 3){
				matriz[i][j] = 9;
			}
			else if(matriz[i][j] == 9){
				matriz[i][j] = 3;
			}
			if(matriz[i][j] == 6){
				matriz[i][j] = 2;
			}
			else if (matriz[i][j] == 2){
				matriz[i][j] = 6;
			}
		}

		if(x == 6){
               	 	if(matriz[i][j] == 5) {
               	 	    matriz[i][j] = 8;
               	 	}
               	 	else if (matriz[i][j] == 8) {
               	 	    matriz[i][j] = 5;
               	 	}
			if(matriz[i][j] == 3){
				matriz[i][j] = 1;
			}
			else if(matriz[i][j] == 1){
				matriz[i][j] = 3;
			}
			if(matriz[i][j] == 6){
				matriz[i][j] = 9;
			}
			else if(matriz[i][j] == 9){
				matriz[i][j] = 6;
			}
			if(matriz[i][j] == 4){
				matriz[i][j] = 2;
			}
			else if (matriz[i][j] == 2){
				matriz[i][j] = 4;
			}
		}

		if(x == 7){
               	 	if(matriz[i][j] == 5) {
               	 	    matriz[i][j] = 2;
               	 	}
               	 	else if (matriz[i][j] == 2) {
               	 	    matriz[i][j] = 5;
               	 	}
			if(matriz[i][j] == 3){
				matriz[i][j] = 6;
			}
			else if(matriz[i][j] == 6){
				matriz[i][j] = 3;
			}
			if(matriz[i][j] == 8){
				matriz[i][j] = 9;
			}
			else if(matriz[i][j] == 9){
				matriz[i][j] = 8;
			}
			if(matriz[i][j] == 4){
				matriz[i][j] = 7;
			}
			else if (matriz[i][j] == 7){
				matriz[i][j] = 4;
			}
		}

		if(x == 8){
               	 	if(matriz[i][j] == 3) {
               	 	    matriz[i][j] = 7;
               	 	}
               	 	else if (matriz[i][j] == 7) {
               	 	    matriz[i][j] = 3;
               	 	}
			if(matriz[i][j] == 1){srand( (unsigned)time(NULL) );
				matriz[i][j] = 8;
			}
			else if(matriz[i][j] == 8){
				matriz[i][j] = 1;
			}
			if(matriz[i][j] == 5){
				matriz[i][j] = 9;
			}
			else if(matriz[i][j] == 9){
				matriz[i][j] = 5;
			}
			if(matriz[i][j] == 2){
				matriz[i][j] =6 ;
			}
			else if (matriz[i][j] == 6){
				matriz[i][j] = 2;
			}
		}

		if(x == 9){
               	 	if(matriz[i][j] == 5) {
               	 	    matriz[i][j] = 3;
               	 	}
               	 	else if (matriz[i][j] == 3) {
               	 	    matriz[i][j] = 5;
               	 	}
			if(matriz[i][j] == 9){
				matriz[i][j] = 7;
			}
			else if(matriz[i][j] == 7){
				matriz[i][j] = 9;
			}
			if(matriz[i][j] == 4){
				matriz[i][j] = 1;
			}
			else if(matriz[i][j] == 1){
				matriz[i][j] = 4;
			}
			if(matriz[i][j] == 6){
				matriz[i][j] = 2;
			}
			else if (matriz[i][j] == 2){
				matriz[i][j] = 6;
			}
		}

		if(x == 10){
               	 	if(matriz[i][j] == 1) {
               	 	    matriz[i][j] = 3;
               	 	}
               	 	else if (matriz[i][j] == 3) {
               	 	    matriz[i][j] = 1;
               	 	}
			if(matriz[i][j] == 9){
				matriz[i][j] = 2;
			}
			else if(matriz[i][j] == 2){
				matriz[i][j] = 9;
			}
			if(matriz[i][j] == 8){
				matriz[i][j] = 6;
			}
			else if(matriz[i][j] == 6){
				matriz[i][j] = 8;
			}
			if(matriz[i][j] == 5){
				matriz[i][j] = 7;
			}
			else if (matriz[i][j] == 7){
				matriz[i][j] = 5;
			}
		}

		if(x == 0){
               	 	if(matriz[i][j] == 5) {
               	 	    matriz[i][j] = 4;
               	 	}
               	 	else if (matriz[i][j] == 4) {
               	 	    matriz[i][j] = 5;
               	 	}
			if(matriz[i][j] == 9){
				matriz[i][j] = 8;
			}
			else if(matriz[i][j] == 8){
				matriz[i][j] = 9;
			}
			if(matriz[i][j] == 4){
				matriz[i][j] = 5;
			}
			else if(matriz[i][j] == 5){
				matriz[i][j] = 4;
			}
			if(matriz[i][j] == 6){
				matriz[i][j] = 1;
			}
			else if (matriz[i][j] == 1){
				matriz[i][j] = 6;
			}
		}

		if(x == 11){
               	 	if(matriz[i][j] == 5) {
               	 	    matriz[i][j] = 1;
               	 	}
               	 	else if (matriz[i][j] == 1) {
               	 	    matriz[i][j] = 5;
               	 	}
			if(matriz[i][j] == 3){
				matriz[i][j] = 7;
			}
			else if(matriz[i][j] == 7){
				matriz[i][j] = 3;
			}
			if(matriz[i][j] == 4){
				matriz[i][j] = 9;
			}
			else if(matriz[i][j] == 9){
				matriz[i][j] = 4;
			}
			if(matriz[i][j] == 6){
				matriz[i][j] = 8;
			}
			else if (matriz[i][j] == 8){
				matriz[i][j] = 6;
			}
		}
            }

        }

    }



