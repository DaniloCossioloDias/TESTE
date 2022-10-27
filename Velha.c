#include <stdio.h>

main() {
    char mat[3][3] = {{'-'}};
    int i, j, p1, vezes,x, y, vitoria = 1, sim;
    do{
        vezes = 0;
        vitoria = 1;
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                mat[i][j] = '-';
            }
        }
        do{
            do{
                printf("Digite as coordenadas:\n");
                scanf("%i%i", &x,&y);
                system("cls");
            }while(mat[x][y] != '-');
            if(p1 == 1) {
                mat[x][y] = 'O';
                p1++;
            }
            else {
                mat[x][y] = 'X';
                p1 = 1;
            }
            vezes++;

            if(mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O' ||
               mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O' ||
               mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O' ||
               mat[0][0] == 'O' && mat[1][0] == 'O' && mat[2][0] == 'O' ||
               mat[0][1] == 'O' && mat[1][1] == 'O' && mat[2][1] == 'O' ||
               mat[0][2] == 'O' && mat[1][2] == 'O' && mat[2][2] == 'O' ||
               mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O' ||
               mat[0][2] == 'O' && mat[1][1] == 'O' && mat[2][0] == 'O' ) {
                printf("Bola ganhou!\n");
                vitoria = 0;
            }
            if(mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X' ||
               mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X' ||
               mat[2][0] == 'X' && mat[2][1] == 'X' && mat[2][2] == 'X' ||
               mat[0][0] == 'X' && mat[1][0] == 'X' && mat[2][0] == 'X' ||
               mat[0][1] == 'X' && mat[1][1] == 'X' && mat[2][1] == 'X' ||
               mat[0][2] == 'X' && mat[1][2] == 'X' && mat[2][2] == 'X' ||
               mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X' ||
               mat[0][2] == 'X' && mat[1][1] == 'X' && mat[2][0] == 'X' ) {
                printf("X ganhou!\n");
                vitoria = 0;
            }

            for(i = 0; i < 3; i++) {
                for(j = 0; j < 3; j++) {
                    printf("[%c]", mat[i][j]);
            }
            printf("\n");
        }
        }while(vitoria == 1 && vezes < 9);
        if(vitoria == 1) {
            printf("EMPATE\n");
        }
        printf("Voce quer jogar novamente? (1 = sim/ 2 = nao)\n");
        scanf("%i", &sim);
        system("cls");
    }while(sim == 1);

}

