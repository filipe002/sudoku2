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
    printf("Digite a opcao desejada...\n");

    scanf("%d", &op);
    return op;
}

int funcaoescreve(int matriz[9][9]){

int i,j;
for(i=0; i<9;i++){
    for(j=0;j<9;j++){
        printf("| %d |", matriz[i][j]);
    }
printf("\n");
}

return;
}

int funcaojogada (int matriz[9][9]){

int i,j,x;

    printf("Digite a linha e a coluna que deseja substituir:\n");
    scanf("%d%d", &i,&j);
    printf("Agora escolha o numero que deseja colocar no lugar selecionado:\n");
    scanf("%d",&x);
    matriz[i][j] = x;
    funcaoescreve(matriz);
return;
}


    int funcaogera(int matriz[9][9]) {

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

        return;
    }

